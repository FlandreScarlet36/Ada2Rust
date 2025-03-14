use std::io::{self, Write};

 fn Array_Example() {
    type Int_Array = [i32; 5 - 1 + 1];
    let My_Array: Int_Array = [1, 2, 3, 4, 5];

    for I in 1..=5 {
        println!("{}", My_Array[I - 1].to_string());
    }
 }
