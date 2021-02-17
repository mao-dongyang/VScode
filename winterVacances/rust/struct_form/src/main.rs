struct User {
    username: String,
    email: String,
    sign_in_count: u64,
    active: bool,
}

struct Color(u8, u8, u8);

#[derive(Debug)]
struct Rectangle {
    width: u32,
    length: u32,
}

fn main() {
    let user1 = User {
        email: String::from("abc@126.com"),
        username: String::from("Nikky"),
        active: true,
        sign_in_count: 556,
    };

    let black = Color(0, 0, 0);
    // let w = 30;
    // let l = 50;

    let rect = Rectangle {
        width: 30,
        length: 50,
    };

    println!("{}", area(&rect));

    println!("{:#?}", rect);
}

// fn area(width: u32, length: u32) -> u32 {
//     width * length
// }

// fn area(dim: (u32, u32)) -> u32 {
//     dim.0 * dim.1
// }

fn area(rect: &Rectangle) -> u32 {
    rect.width * rect.length;
    rect.width * rect.length
}
