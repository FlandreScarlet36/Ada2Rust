use std::io::{self, Write};

 fn Greet() {
    let mut I: i32 = 1;

    loop {
        println!("{}", format!("{}{}", "Hello, World", I.to_string()));
        if I == 5 {
            break;
        }
        I = I + 1;
    }
 }
