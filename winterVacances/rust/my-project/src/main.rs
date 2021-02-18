use std::collections::HashMap;
use std::fmt::Result;
use std::io::Result as IoResult;

fn f1() -> fmt::Result {}

fn f2() -> fmt::Result {}

fn main() {
    let mut map = HashMap::new();
    map.insert(1, 2);
}
