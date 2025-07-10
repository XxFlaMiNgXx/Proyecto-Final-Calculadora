
// Generated from CalcScript.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "CalcScriptParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by CalcScriptParser.
 */
class  CalcScriptListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(CalcScriptParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(CalcScriptParser::ProgramContext *ctx) = 0;

  virtual void enterStatement(CalcScriptParser::StatementContext *ctx) = 0;
  virtual void exitStatement(CalcScriptParser::StatementContext *ctx) = 0;

  virtual void enterAssignment(CalcScriptParser::AssignmentContext *ctx) = 0;
  virtual void exitAssignment(CalcScriptParser::AssignmentContext *ctx) = 0;

  virtual void enterPrint(CalcScriptParser::PrintContext *ctx) = 0;
  virtual void exitPrint(CalcScriptParser::PrintContext *ctx) = 0;

  virtual void enterDiv(CalcScriptParser::DivContext *ctx) = 0;
  virtual void exitDiv(CalcScriptParser::DivContext *ctx) = 0;

  virtual void enterAdd(CalcScriptParser::AddContext *ctx) = 0;
  virtual void exitAdd(CalcScriptParser::AddContext *ctx) = 0;

  virtual void enterNeg(CalcScriptParser::NegContext *ctx) = 0;
  virtual void exitNeg(CalcScriptParser::NegContext *ctx) = 0;

  virtual void enterSub(CalcScriptParser::SubContext *ctx) = 0;
  virtual void exitSub(CalcScriptParser::SubContext *ctx) = 0;

  virtual void enterMul(CalcScriptParser::MulContext *ctx) = 0;
  virtual void exitMul(CalcScriptParser::MulContext *ctx) = 0;

  virtual void enterPow(CalcScriptParser::PowContext *ctx) = 0;
  virtual void exitPow(CalcScriptParser::PowContext *ctx) = 0;

  virtual void enterAtomExpr(CalcScriptParser::AtomExprContext *ctx) = 0;
  virtual void exitAtomExpr(CalcScriptParser::AtomExprContext *ctx) = 0;

  virtual void enterAtom(CalcScriptParser::AtomContext *ctx) = 0;
  virtual void exitAtom(CalcScriptParser::AtomContext *ctx) = 0;

  virtual void enterFunction(CalcScriptParser::FunctionContext *ctx) = 0;
  virtual void exitFunction(CalcScriptParser::FunctionContext *ctx) = 0;


};

