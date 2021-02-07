use rand::Rng;
use std::cmp::Ordering;
use std::io;

fn main() {
    println!("gussing number");

    let secret_number = rand::thread_rng().gen_range(1, 101);

    println!("the secret number is {}", secret_number);

    loop {
        let mut guess = String::new();
        // let foo = 1;
        // let bar = foo;

        // foo = 2;

        io::stdin().read_line(&mut guess).expect("can't read line");

        let guess: u32 = match guess.trim().parse() {
            Ok(number) => number,
            Err(_) => continue,
        };

        println!("your guessing number is {}", guess);

        match guess.cmp(&secret_number) {
            Ordering::Less => println!("Too small"),
            Ordering::Greater => println!("Too big"),
            Ordering::Equal => {
                println!("You win");
                break;
            }
        }
    }
}
