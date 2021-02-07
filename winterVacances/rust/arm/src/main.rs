fn main() {
    let number = 4;

    if number < 5 {
        println!("Yes");
    } else {
        println!("No");
    }

    match number < 5 {
        true => println!("Yes"),
        false => println!("No"),
    }

    let mut counter = 0;

    let result = loop {
        counter += 1;

        if counter == 10 {
            break counter * 2;
        }
    };

    let arr = [10, 20, 30, 40, 50];
    let mut index = 0;

    while index < 5 {
        println!("the value is {}", arr[index]);

        index += 1;
    }

    for element in arr.iter() {
        println!("the value is {}", element);
    }

    for number in (1..4).rev() {
        println!("the number is {}", number);
    }

    println!("The result is {}", result);
}
