
// Generated from EB.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "EBParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by EBParser.
 */
class  EBListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(EBParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(EBParser::ProgramContext *ctx) = 0;

  virtual void enterStatement(EBParser::StatementContext *ctx) = 0;
  virtual void exitStatement(EBParser::StatementContext *ctx) = 0;

  virtual void enterAssignment(EBParser::AssignmentContext *ctx) = 0;
  virtual void exitAssignment(EBParser::AssignmentContext *ctx) = 0;

  virtual void enterIfStatement(EBParser::IfStatementContext *ctx) = 0;
  virtual void exitIfStatement(EBParser::IfStatementContext *ctx) = 0;

  virtual void enterCondition(EBParser::ConditionContext *ctx) = 0;
  virtual void exitCondition(EBParser::ConditionContext *ctx) = 0;

  virtual void enterExpr(EBParser::ExprContext *ctx) = 0;
  virtual void exitExpr(EBParser::ExprContext *ctx) = 0;


};

