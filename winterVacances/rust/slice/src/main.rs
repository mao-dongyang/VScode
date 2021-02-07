fn main() {
    let s = String::from("Hello world");
    let word_index = first_word(&s);

    let hello = &s[0..5];
    let world = &s[6..11];

    println!("{}", word_index);

    println!("{}, {}", hello, world);
}

fn first_word(s: &String) -> &str {
    let bytes = s.as_bytes();
    for (i, &item) in bytes.iter().enumerate() {
        if item == b' ' {
            return &s[..i];
        }
    }
    &s[..]
}
