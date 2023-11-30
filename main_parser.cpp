#include <iostream>
#include <llvm/IR/LLVMContext.h>
#include <llvm/IR/Module.h>
#include <llvm/IR/IRBuilder.h>
#include <llvm/IR/LegacyPassManager.h>
#include <llvm/Transforms/IPO/PassManagerBuilder.h>
#include <llvm/Support/raw_ostream.h>
#include <llvm/ExecutionEngine/ExecutionEngine.h>
#include <llvm/ExecutionEngine/GenericValue.h>
#include <llvm/ExecutionEngine/JITEventListener.h>
#include <llvm/ExecutionEngine/Orc/CompileUtils.h>
#include <llvm/ExecutionEngine/Orc/LLJIT.h>
#include <llvm/ExecutionEngine/Orc/ObjectLinkingLayer.h>
#include <llvm/ExecutionEngine/Orc/IRCompileLayer.h>
#include "EBLexer.h"
#include "EBParser.h"

using namespace llvm;
using namespace llvm::orc;

LLVMContext TheContext;
IRBuilder<> Builder(TheContext);
std::unique_ptr<Module> TheModule;
std::unique_ptr<LLJIT> jit;

Value *generateCode(antlr4::tree::ParseTree *tree);
void optimizeCode();
void executeCode();

int main() {
    TheModule = std::make_unique<Module>("EB Module", TheContext);

    antlr4::ANTLRInputStream input("if x == 42 then y = x * 2; else y = x / 2; endif");
    EBLexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);
    EBParser parser(&tokens);

    auto tree = parser.program();
    std::cout << tree->toStringTree(&parser) << std::endl;

    generateCode(tree);
    optimizeCode();

    TheModule->print(llvm::outs(), nullptr);

    executeCode();

    return 0;
}

Value *generateCode(antlr4::tree::ParseTree *tree) {
    if (tree == nullptr)
        return nullptr;

    if (auto assignmentCtx = dynamic_cast<EBParser::AssignmentContext *>(tree)) {
        std::string variableName = assignmentCtx->ID()->getText();
        Value *expressionValue = generateCode(assignmentCtx->expr());

        // Crear una variable en el IR
        AllocaInst *alloca = Builder.CreateAlloca(Type::getInt32Ty(TheContext), nullptr, variableName);

        // Almacenar el valor en la variable
        Builder.CreateStore(expressionValue, alloca);

        return alloca;
    } else if (auto conditionCtx = dynamic_cast<EBParser::ConditionContext *>(tree)) {
        Value *leftValue = generateCode(conditionCtx->expr(0));
        Value *rightValue = generateCode(conditionCtx->expr(1));

        std::string op = conditionCtx->children[1]->getText();
        ICmpInst::Predicate predicate;

        if (op == "==") {
            predicate = CmpInst::Predicate::ICMP_EQ;
        } else {
            return nullptr;
        }

        // Crear la instrucción de comparación
        Value *condition = Builder.CreateICmp(predicate, leftValue, rightValue, "cmp");

        return condition;
    }


    return nullptr;
}

void optimizeCode() {
    llvm::legacy::PassManager passManager;

    // Agregar optimizaciones estándar
    llvm::PassManagerBuilder passBuilder;
    passBuilder.OptLevel = 2; // Nivel de optimización -O2
    passBuilder.populateModulePassManager(passManager);

    // Ejecutar las optimizaciones
    passManager.run(*TheModule);
}

void executeCode() {
    // Configurar el JIT
    jit = std::make_unique<LLJIT>();

    // Compilar el módulo
    if (auto err = jit->addIRModule(llvm::orc::ThreadSafeModule(std::move(TheModule), std::make_unique<llvm::orc::NullRustDemangle>())))
        llvm::errs() << "Error al agregar el módulo al JIT: " << err << "\n";

    // Obtener el símbolo de la función principal (assumimos que es "main")
    auto mainSymbol = jit->lookup("main");
    if (!mainSymbol) {
        llvm::errs() << "No se pudo encontrar el símbolo 'main'\n";
        return;
    }

    // Ejecutar la función
    auto mainFn = (int (*)())mainSymbol.getAddress();
    int result = mainFn();

    std::cout << "Resultado de la ejecución: " << result << "\n";
}
