use std::ops::Add;

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


 fn example() {
    let mut I: i32 = 1;

    loop {
        let Name: AdaString = I.Image() + "Num is: ".into();
        let NewName: AdaString = "123".into();
        let Str: AdaString = Name + NewName;
        if I == 4 {
            break;
        }
        I = I + 1;
    }
 }
