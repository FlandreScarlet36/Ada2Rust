use std::io::{self, Write};
use std::ops::Add;
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


 fn case4() {
    let mut A: i32 = 12;
    let mut B: i32 = 44;

    fn Compute_B(V: u32) {

        if V > 5 {
            Compute_A(V - 1);
        }
    }

    fn Compute_A(V: u32) {

        if V > 2 {
            Compute_B(V - 1);
        }
    }

    fn Compute_C(V: i32, W: i32) {
        let mut R: i32;

        R = V + W;
    }

    Compute_A(15);
    Compute_C(A, B);
 }
