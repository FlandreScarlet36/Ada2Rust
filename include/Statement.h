#ifndef __ADA2RUST_STATEMENT_H__
#define __ADA2RUST_STATEMENT_H__

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

class RustPutStmt : public RustStmt {
private:
  RustExpr *rustExpr;
public:
  RustPutStmt(RustExpr *_rustExpr) : RustStmt(nullptr), rustExpr(_rustExpr){};
  std::string output(int level) const;
};

class RustGetStmt : public RustStmt {
private:
  IdentifierSymbolEntry *id;
public:
  RustGetStmt(IdentifierSymbolEntry *_id) : RustStmt(nullptr), id(_id){};
  std::string output(int level) const;
};

class RustPutlineStmt : public RustStmt {
private:
  RustExpr *rustExpr;
public:
  RustPutlineStmt(RustExpr *_rustExpr) : RustStmt(nullptr), rustExpr(_rustExpr){};
  std::string output(int level) const;
};

class RustPackageCall : public RustStmt {
private:
  std::string packageName;
public:
  RustPackageCall(std::string _packageName) : RustStmt(nullptr), packageName(_packageName){};
  std::string output(int level) const { return ""; };
};

class RustRange : public RustStmt {
private:
  RustExpr *rustLow;
  RustExpr *rustUpper;

public:
  RustRange(RustExpr *_low, RustExpr *_upper)
      : RustStmt(nullptr), rustLow(_low), rustUpper(_upper){};
  RustExpr *getLow() { return rustLow; }
  RustExpr *getUpper() { return rustUpper; }
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
  RustId *getName() { return name; }
  SymbolEntry *getSE() { return se; }
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
  RustExpr *rustExpr;
  int op;

public:
  enum {
    NOT,
    ABS,
  };
  RustFactor(RustExpr *_expr, int _op) : rustExpr(_expr), op(_op){};
  std::string output() const;
};

class RustBinaryExpr : public RustExpr {
private:
  RustExpr *rustExpr1, *rustExpr2;
  RustRange *rustRange;
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
      : rustExpr1(_expr1), rustExpr2(_expr2), sign(_sign){};
  RustBinaryExpr(RustExpr *_expr1, int _sign) : rustExpr1(_expr1), sign(_sign) {
    isUnary = true;
  };
  RustBinaryExpr(RustExpr *_expr1, RustRange *_range, int _sign)
      : rustExpr1(_expr1), rustRange(_range), sign(_sign) {
    isMember = true;
  };
  RustBinaryExpr(RustExpr *_expr1, SymbolEntry *_se, int _sign)
      : rustExpr1(_expr1), se(_se), sign(_sign) {
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
  RustExpr *rustExpr;

public:
  RustAssignStmt(Function *func, SymbolEntry *_se, RustExpr *_rExpr)
      : RustStmt(func) {
    se = _se;
    rustExpr = _rExpr;
  };
  std::string output(int level) const;
};

class RustCallStmt : public RustStmt {
private:
  RustId *rustId;

public:
  RustCallStmt(Function *_func, RustId *_rId) : RustStmt(_func), rustId(_rId){};
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
  RustIteration *rustIter;
  RustSeqStmt *loop;

public:
  RustLoopStmt(Function *_func, RustIteration *_rustIter, RustSeqStmt *_loop)
      : RustStmt(_func), rustIter(_rustIter), loop(_loop){};
  std::string output(int level) const;
};

class RustChoice : public RustStmt {
private:
  RustExpr *rustExpr;
  RustRange *range;
  bool isOther = false;
  bool isExpr = false;
  bool isRange = false;

public:
  RustChoice(RustExpr *_rustExpr) : RustStmt(nullptr), rustExpr(_rustExpr) {
    isExpr = true;
  };
  RustChoice(RustRange *_range) : RustStmt(nullptr), range(_range) {
    isRange = true;
  };
  bool getIsExpr() { return isExpr; }
  bool getIsRange() { return isRange; }
  bool getIsOther() { return isOther; }
  RustExpr *getExpr() { return rustExpr; }
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
  std::string output(int level) const { return ""; };
};

class RustCaseStmt : public RustStmt {
private:
  RustExpr *rustExpr;
  RustAlternative *alter;

public:
  RustCaseStmt(Function *_func, RustExpr *_rustExpr, RustAlternative *_alter)
      : RustStmt(_func), rustExpr(_rustExpr), alter(_alter){};
  std::string output(int level) const;
};

class RustExitStmt : public RustStmt {
private:
  RustExpr *rustCond;

public:
  RustExitStmt(RustExpr *_rustCond = nullptr) : RustStmt(nullptr), rustCond(_rustCond){};
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