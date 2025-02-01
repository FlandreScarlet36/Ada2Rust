#ifndef __ADA2C_CPPBUILDER_H__
#define __ADA2C_CPPBUILDER_H__

#include <stack>
class RustUnit;
class Function;

class RustBuilder {
private:
  RustUnit *unit;
  std::stack<Function *> curFunc;

public:
  RustBuilder(RustUnit *unit) : unit(unit){};
  RustUnit *getUnit() { return unit; };
  void setCurrFunc(Function *func) { curFunc.push(func); };
  void removeCurrFunc() {
    if (curFunc.top())
      curFunc.pop();
  }
  Function *getCurrFunc() { return curFunc.top(); }
};

#endif