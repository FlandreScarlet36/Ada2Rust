#include "RustType.h"

extern FILE *yyout;
bool AdaInteger::isUsed = false;
bool AdaNatural::isUsed = false;
bool AdaString::isUsed = false;

void AdaInteger::output() {
  fprintf(yyout, R"(use std::ops::Add;
const LAST: i32 = std::i32::MAX;

// 定义一个新的类型 AdaString 来包装 String
struct AdaString(String);

// 为 AdaString 实现 Add trait
impl Add for AdaString {
    type Output = AdaString;

    fn add(self, other: AdaString) -> AdaString {
        AdaString(format!("{}{}", self.0, other.0))
    }
}

// 为 AdaString 实现 From<&str> trait
impl From<&str> for AdaString {
    fn from(s: &str) -> AdaString {
        AdaString(s.to_string())
    }
}

// 为 i32 类型实现扩展方法 image
trait Image {
    fn Image(&self) -> AdaString;
}

impl Image for i32 {
    fn Image(&self) -> AdaString {
        AdaString(self.to_string())
    }
}

)");
}

void AdaNatural::output() {
  //fprintf(yyout, R"()");
}

void AdaString::output() {
  //fprintf(yyout, R"()");
}