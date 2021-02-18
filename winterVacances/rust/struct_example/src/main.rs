#[derive(Debug)]
struct Rectangle {
    width: u32,
    length: u32,
}

impl Rectangle {
    fn area(&self) -> u32 {
        self.width * self.length
    }

    fn can_hold(&self, other: &Rectangle) -> bool {
        self.length > other.length && self.width > other.width
    }

    fn squre(size: u32) -> Rectangle {
        Rectangle {
            width: size,
            length: size,
        }
    }
}

fn main() {
    let s = Rectangle::squre(20);

    let rect = Rectangle {
        width: 30,
        length: 40,
    };

    let rect1 = Rectangle {
        width: 20,
        length: 30,
    };

    let rect2 = Rectangle {
        width: 10,
        length: 40,
    };

    println!("{}", rect.can_hold(&rect1));
    println!("{}", rect.can_hold(&rect2));
    println!("{}", rect.can_hold(&s));

    println!("{}", rect.area());
}
