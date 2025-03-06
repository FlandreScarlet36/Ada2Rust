#include "Type.h"

IntegerType TypeSystem::commonInteger = IntegerType(32);
NaturalType TypeSystem::commonNatural = NaturalType(32);
BooleanType TypeSystem::commonBool = BooleanType(1);
CharacterType TypeSystem::commonCharacter = CharacterType(8);
StringType TypeSystem::commonString = StringType(16);
FloatType TypeSystem::commonFloat = FloatType(32); // 新增的 FloatType 成员变量初始化

Type* TypeSystem::integerType = &commonInteger;
Type* TypeSystem::boolType = &commonBool;
Type* TypeSystem::naturalType = &commonNatural;
Type* TypeSystem::characterType = &commonCharacter;
Type* TypeSystem::stringType = &commonString;
Type* TypeSystem::floatType = &commonFloat; // 新增的 FloatType 指针初始化

std::string IntegerType::dump() {
    return "Integer";
}

std::string IntegerType::toRustStr() {
    return "i32";
}

std::string BooleanType::dump() {
    return "Boolean";
}

std::string BooleanType::toRustStr() {
    return "bool";
}

std::string CharacterType::dump() {
    return "Character";
}

std::string CharacterType::toRustStr() {
    return "char";
}

std::string StringType::dump() {
    return "String";
}

std::string StringType::toRustStr() {
    return "String";
}

std::string NaturalType::dump() {
    return "Natural";
}

std::string NaturalType::toRustStr() {
    return "u32";
}

std::string FloatType::dump() {
    return "Float";
}

std::string FloatType::toRustStr() {
    return "f32";
}

std::string ProcedureType::dump() {
    if(returnType) {
        return "Function";
    } else {
        return "Procedure";
    }
}

std::string ProcedureType::toRustStr() {
    if(returnType) {
        return "Function";
    } else {
        return "Procedure";
    }
}

std::string FunctionType::dump() {
    return "Function";
}

std::string FunctionType::toRustStr() {
    return "Function";
}