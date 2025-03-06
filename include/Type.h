#ifndef __ADA2RUST_TYPE_H__
#define __ADA2RUST_TYPE_H__

#include <string>
#include <vector>

class SymbolEntry;

class Type {
private:
  int kind;

protected:
  enum { INTEGER, BOOLEAN, CHARACTER, STRING, NATURAL, FLOAT, PROCEDURE, FUNCTION };

public:
  Type(int _kind) : kind(_kind){};
  ~Type(){};
  virtual std::string dump() = 0;
  virtual std::string toRustStr() = 0;
  bool isInteger() const { return kind == INTEGER; };
  bool isFloat() const { return kind == FLOAT; };
  bool isBoolean() const { return kind == BOOLEAN; };
  bool isCharacter() const { return kind == CHARACTER; };
  bool isString() const { return kind == STRING; };
  bool isNatural() const { return kind == NATURAL; };
  bool isProcedure() const { return kind == PROCEDURE; };
  bool isFunction() const { return kind == FUNCTION; };
};

class IntegerType : public Type {
private:
  int size;

public:
  IntegerType(int _size) : Type(Type::INTEGER), size(_size){};
  std::string dump();
  std::string toRustStr();
};

class FloatType : public Type {
  private:
    int size;
  
  public:
    FloatType(int _size) : Type(Type::FLOAT), size(_size) {};
    std::string dump();
    std::string toRustStr();
  };

class BooleanType : public Type {
private:
  int size;

public:
  BooleanType(int _size) : Type(Type::BOOLEAN), size(_size){};
  std::string dump();
  std::string toRustStr();
};

class CharacterType : public Type {
private:
  int size;

public:
  CharacterType(int _size) : Type(Type::CHARACTER), size(_size){};
  std::string dump();
  std::string toRustStr();
};

class StringType : public Type {
private:
  int length;

public:
  StringType(int _length) : Type(Type::STRING), length(_length){};
  std::string dump();
  std::string toRustStr();
};

class NaturalType : public Type {
private:
  int size;

public:
  NaturalType(int _size) : Type(Type::NATURAL), size(_size){};
  std::string dump();
  std::string toRustStr();
};

class ProcedureType : public Type {
private:
  std::vector<Type *> paramsType;
  std::vector<SymbolEntry *> paramIds;
  Type *returnType;

public:
  ProcedureType() : Type(Type::PROCEDURE), returnType(nullptr) {};
  ProcedureType(std::vector<Type *> paramsType)
      : Type(Type::PROCEDURE), paramsType(paramsType), returnType(nullptr) {};
  ProcedureType(std::vector<Type *> paramsType,
                std::vector<SymbolEntry *> paramIds)
      : Type(Type::PROCEDURE), paramsType(paramsType), paramIds(paramIds), returnType(nullptr) {};
  void setParams(std::vector<Type *> paramsType,
                 std::vector<SymbolEntry *> paramIds) {
    this->paramsType.assign(paramsType.begin(), paramsType.end());
    this->paramIds.assign(paramIds.begin(), paramIds.end());
  }
  void setReturnType(Type *ret) {
    this->returnType = ret;
    
  }
  std::vector<Type*> getParamType() {
    return paramsType;
  }
  std::vector<SymbolEntry*> getParamIds() {
    return paramIds;
  }
  Type *getRetType() { return returnType; };
  std::string dump();
  std::string toRustStr();
};

class FunctionType : public Type {
private:
  Type *returnType;
  std::vector<Type *> paramsType;
  std::vector<SymbolEntry *> paramIds;

public:
  FunctionType(Type *returnType, std::vector<Type *> paramsType)
      : Type(Type::FUNCTION), returnType(returnType), paramsType(paramsType){};
  FunctionType(Type *returnType, std::vector<Type *> paramsType,
               std::vector<SymbolEntry *> paramIds)
      : Type(Type::FUNCTION), returnType(returnType), paramsType(paramsType),
        paramIds(paramIds){};
  std::string dump();
  std::vector<Type*> getParamType() {
    return paramsType;
  }
  std::vector<SymbolEntry*> getParamIds() {
    return paramIds;
  }
  Type *getRetType() { return returnType; };
  std::string toRustStr();
};

class TypeSystem {
private:
  static IntegerType commonInteger;
  static NaturalType commonNatural;
  static BooleanType commonBool;
  static CharacterType commonCharacter;
  static StringType commonString;
  static FloatType commonFloat;
public:
  static Type *integerType;
  static Type *naturalType;
  static Type *boolType;
  static Type *characterType;
  static Type *stringType;
  static Type *floatType;
};

#endif