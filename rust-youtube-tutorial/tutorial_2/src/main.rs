fn main() {
    let x = 4;
    println!("x is: {}", x);

    // interior scope
    {
        // name shadowing
        let x = 2;
        println!("x is: {}", x);
    }

    // in rust, you can redeclare the variable in the same scope
    // when it's previous value is finished its use
    let x = x + 1;
    println!("x is: {}", x);

    // in case of redecalring the variables
    // you can even can its type. example
    let x = "hello";
    println!("x = {}", x);

    // another way you can update the value is make variable
    // mutable. By default, every variable is immutable.
    let mut a = 4;
    println!("a is: {}", a);
    a = 5;
    println!("a is: {}", a);

    // const cannot be changed or reassigned or redefine
    const SECONDS_IN_MINUTE: u32 = 60;
    println!("const value: {}", SECONDS_IN_MINUTE);
}
