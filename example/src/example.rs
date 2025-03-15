use std::io::{self, Write};

 fn Enumeration_Example() {
    let Monday: i32 = 0;
    let Tuesday: i32 = 1;
    let Wednesday: i32 = 2;
    let Thursday: i32 = 3;
    let Friday: i32 = 4;
    let Saturday: i32 = 5;
    let Sunday: i32 = 6;

    for I in 0..=6 {
        match I {
            Saturday..=Sunday => {
                println!("{}", "Week end!");
            }
            Monday..=Friday => {
                println!("{}", "Week day!");
            }
            _ => {}
        }
    }
 }
