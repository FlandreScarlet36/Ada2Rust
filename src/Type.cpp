#include "Type.h"

IntegerType TypeSystem::commonInteger = IntegerType(32);
NaturalType TypeSystem::commonNatural = NaturalType(32);
BooleanType TypeSystem::commonBool = BooleanType(1);
StringType TypeSystem::commonString = StringType(16);

Type* TypeSystem::integerType = &commonInteger;
Type* TypeSystem::boolType = &commonBool;
Type* TypeSystem::naturalType = &commonNatural;
Type* TypeSystem::stringType = &commonString;

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

std::string StringType::dump() {
    return "String";
}

std::string StringType::toRustStr() {
    return "AdaString";
}

std::string NaturalType::dump() {
    return "Natural";
}

std::string NaturalType::toRustStr() {
    AdaNatural::getInstance();
    return "u32";
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