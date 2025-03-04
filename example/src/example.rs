use std::io::{self, Write};

 fn Constant_Example() {
    let A: i32 = 114;
    let B: i32 = 514;

    println!("{}", format!("{}{}", "A is: ", A.to_string()));
    println!("{}", format!("{}{}", "B is: ", B.to_string()));
 }
