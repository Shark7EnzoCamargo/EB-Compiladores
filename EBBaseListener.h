
// Generated from EB.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "EBListener.h"


/**
 * This class provides an empty implementation of EBListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  EBBaseListener : public EBListener {
public:

  virtual void enterProgram(EBParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(EBParser::ProgramContext * /*ctx*/) override { }

  virtual void enterStatement(EBParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(EBParser::StatementContext * /*ctx*/) override { }

  virtual void enterAssignment(EBParser::AssignmentContext * /*ctx*/) override { }
  virtual void exitAssignment(EBParser::AssignmentContext * /*ctx*/) override { }

  virtual void enterIfStatement(EBParser::IfStatementContext * /*ctx*/) override { }
  virtual void exitIfStatement(EBParser::IfStatementContext * /*ctx*/) override { }

  virtual void enterCondition(EBParser::ConditionContext * /*ctx*/) override { }
  virtual void exitCondition(EBParser::ConditionContext * /*ctx*/) override { }

  virtual void enterExpr(EBParser::ExprContext * /*ctx*/) override { }
  virtual void exitExpr(EBParser::ExprContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

