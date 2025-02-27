use std::ops::Add;
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


 fn case13() {
    let mut B: bool;

    for I in 1..=10 {
        match I {
            1 | 3 | 5 | 7 | 9 => {
                B = true;
            }
            2 | 4 | 6 | 8 | 10 => {
                B = false;
            }
            _ => {}
        }
    }
 }
