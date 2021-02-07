const MAX_POINT: u32 = 100_000;

fn main() {
    println!("{}", MAX_POINT);
    let x = 5;
    let x = x + 1;
    println!("{}", x);

    let z = (100, "hfosh", false);

    let (x, y, _) = z;

    println!("{},{},{}", x, y, z.2);

    let guess: u32 = "42".parse().expect("not a number");
    println!("{}", guess);
    println!("Hello, world!");
}
