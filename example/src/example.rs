use std::io::{self, Write};

 fn Array_Example() {
    type Int_Array = [i32; 10 - 6 + 1];
    type Int_Array2 = [i32; 5 - 1 + 1];
    let New_Array: Int_Array = [1, 2, 3, 4, 5];

    print!("{}", format!("{}{}", format!("{}{}", format!("{}{}", "Array Example", "aaa"), "bbb"), "ccc"));
 }
