use std::io;
use rand::Rng;
use std::cmp::Ordering;

fn main() {
    println!("Guess the number! range 1-100");

    let secret_number = rand::thread_rng().gen_range(1, 101);

    // println!("The secret number is {}", secret_number);

    let stdin = io::stdin();

    loop {
        let mut guess = String::new();

        println!("Please input your guess.");

        stdin
            .read_line(&mut guess)
            .expect("Failed to get input.");

        println!("You guessed {}", guess);

        let guess: u32 = match guess.trim().parse() {
            Ok(num) => num,
            Err(_) => continue,
        };

        match guess.cmp(&secret_number) {
            Ordering::Less => println!("Too small!"),
            Ordering::Equal => {
                println!("Correct!");
                break;
            }
            Ordering::Greater => println!("Too big!"),
        }
    }
}
