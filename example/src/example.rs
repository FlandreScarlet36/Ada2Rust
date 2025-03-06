use std::io::{self, Write};

 fn Constant_Example() {
    let Pi: f32 = 3.14159;
    let Radius: f32 = 5;
    let mut Area: f32;

    Area = Pi * Radius * Radius;
    println!("{}", format!("{}{}", "The area of the circle is: ", Area.to_string()));
 }
