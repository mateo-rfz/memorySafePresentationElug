use std::io::{self, Write};

fn vulnerable_function() {
    let mut buffer = String::with_capacity(10);
    print!("Enter something: ");
    io::stdout().flush().unwrap();
    io::stdin().read_line(&mut buffer).unwrap();
    println!("You entered: {}", buffer);
}

fn main() {
    vulnerable_function();
}
