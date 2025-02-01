#include "RustType.h"

extern FILE *yyout;
bool AdaInteger::isUsed = false;
bool AdaNatural::isUsed = false;
bool AdaString::isUsed = false;

void AdaInteger::output() {
  fprintf(yyout, R"(
use std::fmt;
#[derive(Debug, Clone, PartialEq, PartialOrd)]
struct AdaInteger {
    value: i32,
}

impl AdaInteger {
    fn new(value: i32) -> Self {
        AdaInteger { value }
    }

    fn image(&self) -> String {
        self.value.to_string()
    }
}

impl std::ops::Neg for AdaInteger {
    type Output = AdaInteger;

    fn neg(self) -> AdaInteger {
        AdaInteger::new(-self.value)
    }
}

impl std::ops::Add for AdaInteger {
    type Output = AdaInteger;

    fn add(self, other: AdaInteger) -> AdaInteger {
        AdaInteger::new(self.value + other.value)
    }
}

impl std::ops::Add<i32> for AdaInteger {
    type Output = AdaInteger;

    fn add(self, other: i32) -> AdaInteger {
        AdaInteger::new(self.value + other)
    }
}

impl std::ops::Sub for AdaInteger {
    type Output = AdaInteger;

    fn sub(self, other: AdaInteger) -> AdaInteger {
        AdaInteger::new(self.value - other.value)
    }
}

impl std::ops::Sub<i32> for AdaInteger {
    type Output = AdaInteger;

    fn sub(self, other: i32) -> AdaInteger {
        AdaInteger::new(self.value - other)
    }
}

impl fmt::Display for AdaInteger {
    fn fmt(&self, f: &mut fmt::Formatter) -> fmt::Result {
        write!(f, "{}", self.value)
    }
}

impl AdaInteger {
    const LAST: AdaInteger = AdaInteger { value: i32::MAX };
}
)");
}

void AdaNatural::output() {
  fprintf(yyout, R"(
#[derive(Debug, Clone)]
struct AdaNatural {
    value: i32,
}

impl AdaNatural {
    fn new(value: i32) -> Self {
        AdaNatural { value }
    }
}

impl std::ops::Neg for AdaNatural {
    type Output = AdaNatural;

    fn neg(self) -> AdaNatural {
        AdaNatural::new(-self.value)
    }
}

impl std::ops::Add for AdaNatural {
    type Output = AdaNatural;

    fn add(self, other: AdaNatural) -> AdaNatural {
        AdaNatural::new(self.value + other.value)
    }
}

impl std::ops::Add<i32> for AdaNatural {
    type Output = AdaNatural;

    fn add(self, other: i32) -> AdaNatural {
        AdaNatural::new(self.value + other)
    }
}

impl std::ops::Sub for AdaNatural {
    type Output = AdaNatural;

    fn sub(self, other: AdaNatural) -> AdaNatural {
        AdaNatural::new(self.value - other.value)
    }
}

impl std::ops::Sub<i32> for AdaNatural {
    type Output = AdaNatural;

    fn sub(self, other: i32) -> AdaNatural {
        AdaNatural::new(self.value - other)
    }
}

impl PartialEq<i32> for AdaNatural {
    fn eq(&self, other: &i32) -> bool {
        self.value == *other
    }
}

impl PartialOrd<i32> for AdaNatural {
    fn partial_cmp(&self, other: &i32) -> Option<std::cmp::Ordering> {
        self.value.partial_cmp(other)
    }
}

impl std::cmp::PartialEq for AdaNatural {
    fn eq(&self, other: &Self) -> bool {
        self.value == other.value
    }
}

impl std::cmp::PartialOrd for AdaNatural {
    fn partial_cmp(&self, other: &Self) -> Option<std::cmp::Ordering> {
        self.value.partial_cmp(&other.value)
    }
}

impl fmt::Display for AdaNatural {
    fn fmt(&self, f: &mut fmt::Formatter) -> fmt::Result {
        write!(f, "{}", self.value)
    }
}
)");
}

void AdaString::output() {
  fprintf(yyout, R"(  
#[derive(Debug, Clone)]
struct AdaString {
    value: String,
}

impl AdaString {
    fn new(value: &str) -> Self {
        AdaString {
            value: value.to_string(),
        }
    }

    fn get_value(&self) -> &str {
        &self.value
    }

    fn set_value(&mut self, value: &str) {
        self.value = value.to_string();
    }
}

impl std::ops::Add for AdaString {
    type Output = AdaString;

    fn add(self, other: AdaString) -> AdaString {
        AdaString::new(&(self.value + &other.value))
    }
}

impl std::ops::Add<&str> for AdaString {
    type Output = AdaString;

    fn add(self, other: &str) -> AdaString {
        AdaString::new(&(self.value + other))
    }
}

impl fmt::Display for AdaString {
    fn fmt(&self, f: &mut fmt::Formatter) -> fmt::Result {
        write!(f, "{}", self.value)
    }
}
)");
}