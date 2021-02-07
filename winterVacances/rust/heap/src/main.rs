fn main() {
    let mut s = String::from("Hello");

    s.push_str(", World");

    println!("{}", s);

    let s1 = String::from("hello");
    let len = caculate_length(&s1);

    println!("{}", len);
}

fn caculate_length(s: &String) -> usize {
    s.len()
}
