use std::io::{self, Write};
use std::ops::Add;
use std::fmt;
const LAST: i32 = std::i32::MAX;

// 定义一个新的类型 AdaString 来包装 String
struct AdaString(String);

// 为 AdaString 实现 Display trait
impl fmt::Display for AdaString {
    fn fmt(&self, f: &mut fmt::Formatter) -> fmt::Result {
        write!(f, "{}", self.0)
    }
}

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


 fn Constant_Example() {
    let Length: i32 = 10;
    let Width: i32 = 5;
    let mut Area: i32;

    Area = Length * Width;
    println!("{}", AdaString::from("The area of the rectangle is: ") + Area.Image());
 }
