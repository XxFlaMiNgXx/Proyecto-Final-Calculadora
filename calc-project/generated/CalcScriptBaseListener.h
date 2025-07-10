
// Generated from CalcScript.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "CalcScriptListener.h"


/**
 * This class provides an empty implementation of CalcScriptListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  CalcScriptBaseListener : public CalcScriptListener {
public:

  virtual void enterProgram(CalcScriptParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(CalcScriptParser::ProgramContext * /*ctx*/) override { }

  virtual void enterStatement(CalcScriptParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(CalcScriptParser::StatementContext * /*ctx*/) override { }

  virtual void enterAssignment(CalcScriptParser::AssignmentContext * /*ctx*/) override { }
  virtual void exitAssignment(CalcScriptParser::AssignmentContext * /*ctx*/) override { }

  virtual void enterPrint(CalcScriptParser::PrintContext * /*ctx*/) override { }
  virtual void exitPrint(CalcScriptParser::PrintContext * /*ctx*/) override { }

  virtual void enterDiv(CalcScriptParser::DivContext * /*ctx*/) override { }
  virtual void exitDiv(CalcScriptParser::DivContext * /*ctx*/) override { }

  virtual void enterAdd(CalcScriptParser::AddContext * /*ctx*/) override { }
  virtual void exitAdd(CalcScriptParser::AddContext * /*ctx*/) override { }

  virtual void enterNeg(CalcScriptParser::NegContext * /*ctx*/) override { }
  virtual void exitNeg(CalcScriptParser::NegContext * /*ctx*/) override { }

  virtual void enterSub(CalcScriptParser::SubContext * /*ctx*/) override { }
  virtual void exitSub(CalcScriptParser::SubContext * /*ctx*/) override { }

  virtual void enterMul(CalcScriptParser::MulContext * /*ctx*/) override { }
  virtual void exitMul(CalcScriptParser::MulContext * /*ctx*/) override { }

  virtual void enterPow(CalcScriptParser::PowContext * /*ctx*/) override { }
  virtual void exitPow(CalcScriptParser::PowContext * /*ctx*/) override { }

  virtual void enterAtomExpr(CalcScriptParser::AtomExprContext * /*ctx*/) override { }
  virtual void exitAtomExpr(CalcScriptParser::AtomExprContext * /*ctx*/) override { }

  virtual void enterAtom(CalcScriptParser::AtomContext * /*ctx*/) override { }
  virtual void exitAtom(CalcScriptParser::AtomContext * /*ctx*/) override { }

  virtual void enterFunction(CalcScriptParser::FunctionContext * /*ctx*/) override { }
  virtual void exitFunction(CalcScriptParser::FunctionContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

