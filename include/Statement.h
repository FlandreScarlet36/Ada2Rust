#ifndef __ADA2C_STATEMENT_H__
#define __ADA2C_STATEMENT_H__

#include "Operand.h"
#include "SymbolTable.h"
#include <cstring>
#include <iostream>
using namespace std;

class Function;

// The Ast Node of Rust Grammar
class RustNode {
private:
  static int counter;
  int seq;
  RustNode *next;

public:
  RustNode();
  virtual ~RustNode() {}
  int getSeq() const { return seq; };
  void setNext(RustNode *node);
  RustNode *getNext() const { return next; };
};

// Statement in Rust
class RustStmt : public RustNode {
protected:
  RustStmt *next;

public:
  RustStmt(Function *func);
  void setNext(RustStmt *stmt);
  RustStmt *getNext() const { return next; };
  virtual std::string output(int level) const = 0;
};

// Expr in Rust
class RustExpr : public RustNode {
public:
  virtual std::string output() const = 0;
};

class RustRange : public RustStmt {
private:
  RustExpr *cLow;
  RustExpr *cUpper;

public:
  RustRange(RustExpr *_low, RustExpr *_upper)
      : RustStmt(nullptr), cLow(_low), cUpper(_upper){};
  RustExpr *getLow() { return cLow; }
  RustExpr *getUpper() { return cUpper; }
  std::string output(int level) const { return ""; };
};

class RustId : public RustExpr {
private:
  SymbolEntry *se;
  RustId *name;
  RustExpr *expr;
  std::string attr;

public:
  RustId(SymbolEntry *_se) : se(_se){};
  RustId(RustId *_id, RustExpr *_expr) : name(_id), expr(_expr){};
  RustId(RustId *_id, std::string _attr) : name(_id), attr(_attr){};
  RustExpr *getParam() { return expr; }
  std::string output() const;
};

class RustConstant : public RustExpr {
private:
  SymbolEntry *se;

public:
  RustConstant(SymbolEntry *_se) : se(_se){};
  std::string output() const;
};

class RustFactor : public RustExpr {
private:
  RustExpr *cExpr;
  int op;

public:
  enum {
    NOT,
    ABS,
  };
  RustFactor(RustExpr *_expr, int _op) : cExpr(_expr), op(_op){};
  std::string output() const;
};

class RustBinaryExpr : public RustExpr {
private:
  RustExpr *cExpr1, *cExpr2;
  RustRange *cRange;
  SymbolEntry *se;
  int sign;
  bool isUnary;
  bool isMember;

public:
  enum {
    MUL,
    DIV,
    MOD,
    REM,
    ADD,
    SUB,
    SINGLEAND,
    IN,
    NOTIN,
    EQ,
    NE,
    LE,
    LTEQ,
    GE,
    GTEQ,
    ANDTHEN,
    ORELSE,
    AND,
    OR,
    XOR,
    EXPON,
  };
  RustBinaryExpr(RustExpr *_expr1, RustExpr *_expr2, int _sign)
      : cExpr1(_expr1), cExpr2(_expr2), sign(_sign){};
  RustBinaryExpr(RustExpr *_expr1, int _sign) : cExpr1(_expr1), sign(_sign) {
    isUnary = true;
  };
  RustBinaryExpr(RustExpr *_expr1, RustRange *_range, int _sign)
      : cExpr1(_expr1), cRange(_range), sign(_sign) {
    isMember = true;
  };
  RustBinaryExpr(RustExpr *_expr1, SymbolEntry *_se, int _sign)
      : cExpr1(_expr1), se(_se), sign(_sign) {
    isMember = true;
  };
  std::string output() const;
};

class RustSeqStmt : public RustStmt {
private:
  RustStmt *stmt;

public:
  RustSeqStmt() : RustStmt(nullptr){};
  RustSeqStmt(Function *func) : RustStmt(func){};
  RustSeqStmt(Function *func, RustStmt *_stmt) : RustStmt(func), stmt(_stmt){};
  std::string output(int level) const;
};

class RustDummyStmt : public RustStmt {
public:
  RustDummyStmt() : RustStmt(nullptr){};
  RustDummyStmt(Function *func) : RustStmt(func){};
  std::string output(int level) const;
};

class RustAssignStmt : public RustStmt {
private:
  SymbolEntry *se;
  RustExpr *cExpr;

public:
  RustAssignStmt(Function *func, SymbolEntry *_se, RustExpr *_cExpr)
      : RustStmt(func) {
    se = _se;
    cExpr = _cExpr;
  };
  std::string output(int level) const;
};

class RustCallStmt : public RustStmt {
private:
  RustId *cId;

public:
  RustCallStmt(Function *_func, RustId *_cId) : RustStmt(_func), cId(_cId){};
  std::string output(int level) const;
};

class RustCondClause : public RustStmt {
private:
  RustExpr *cond;
  RustSeqStmt *stmts;

public:
  RustCondClause(Function *_func, RustExpr *_cond, RustSeqStmt *_stmts)
      : RustStmt(_func) {
    cond = _cond;
    stmts = _stmts;
  };
  RustExpr *getCond() { return cond; }
  RustStmt *getStmts() { return stmts; }
  std::string output(int level) const;
};

class RustIfStmt : public RustStmt {
private:
  RustCondClause *clause;
  RustSeqStmt *elsestmt; // maybe is nullptr

public:
  RustIfStmt(Function *_func, RustCondClause *_clause,
            RustSeqStmt *_elsestmt = nullptr)
      : RustStmt(_func) {
    clause = _clause;
    elsestmt = _elsestmt;
  };
  std::string output(int level) const;
};

class RustIteration : public RustStmt {
private:
  SymbolEntry *se;
  RustRange *range;
  bool isReverse;

  RustExpr *cond = nullptr;

public:
  RustIteration(SymbolEntry *_se, RustRange *_range, bool _isReverse = false)
      : RustStmt(nullptr), se(_se), range(_range), isReverse(_isReverse){};
  RustIteration(RustExpr *_cond) : RustStmt(nullptr), cond(_cond){};
  std::string output(int level) const;
};

class RustLoopStmt : public RustStmt {
private:
  RustIteration *cIter;
  RustSeqStmt *loop;

public:
  RustLoopStmt(Function *_func, RustIteration *_cIter, RustSeqStmt *_loop)
      : RustStmt(_func), cIter(_cIter), loop(_loop){};
  std::string output(int level) const;
};

class RustChoice : public RustStmt {
private:
  RustExpr *cExpr;
  RustRange *range;
  bool isOther = false;
  bool isExpr = false;
  bool isRange = false;

public:
  RustChoice(RustExpr *_cExpr) : RustStmt(nullptr), cExpr(_cExpr) {
    isExpr = true;
  };
  RustChoice(RustRange *_range) : RustStmt(nullptr), range(_range) {
    isRange = true;
  };
  bool getIsExpr() { return isExpr; }
  bool getIsRange() { return isRange; }
  bool getIsOther() { return isOther; }
  RustExpr *getExpr() { return cExpr; }
  RustRange *getRange() { return range; }
  RustChoice(bool _isOther) : RustStmt(nullptr), isOther(_isOther){};
  std::string output(int level) const { return ""; };
};

class RustAlternative : public RustStmt {
private:
  RustChoice *choices;
  RustSeqStmt *stmts;

public:
  RustAlternative(RustChoice *_choices, RustSeqStmt *_stmts)
      : RustStmt(nullptr), choices(_choices), stmts(_stmts){};
  RustChoice *getChoices() { return choices; }
  RustSeqStmt *getStmts() { return stmts; }
  std::string output(int level) const {};
};

class RustCaseStmt : public RustStmt {
private:
  RustExpr *cExpr;
  RustAlternative *alter;

public:
  RustCaseStmt(Function *_func, RustExpr *_cExpr, RustAlternative *_alter)
      : RustStmt(_func), cExpr(_cExpr), alter(_alter){};
  std::string output(int level) const;
};

class RustExitStmt : public RustStmt {
private:
  RustExpr *cCond;

public:
  RustExitStmt(RustExpr *_cCond = nullptr) : RustStmt(nullptr), cCond(_cCond){};
  std::string output(int level) const;
};

class RustBlockStmt : public RustStmt {
private:
  RustSeqStmt *stmts;
  std::vector<Operand *> declvec;

public:
  RustBlockStmt(Function *_func, RustSeqStmt *_stmts)
      : RustStmt(_func), stmts(_stmts){};
  void addOps(Operand *_op) { declvec.push_back(_op); }
  std::string output(int level) const;
};

class RustFuncDecl: public RustStmt {
private:
  SymbolEntry* se;

public:
  RustFuncDecl(Function *_func, SymbolEntry* _se);
  std::string output(int level) const;
};

#endif