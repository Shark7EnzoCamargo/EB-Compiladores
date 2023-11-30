#include "EBLexer.h"
#include "antlr4-runtime.h"
#include <iostream>

int main() {
    antlr4::ANTLRInputStream input("if x == 42 then y = x * 2; else y = x / 2; endif");
    EBLexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);

    tokens.fill();
    for (auto token : tokens.getTokens()) {
        std::cout << "Token: " << token->toString() << std::endl;
    }

    return 0;
}
