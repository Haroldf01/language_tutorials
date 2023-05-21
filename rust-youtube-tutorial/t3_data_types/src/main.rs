fn main() {
    // primitive data types
    // are the basic or fundamental data types used to declare a variable

    // Two categories of primitive data types
    // scalar and compound

    // SCALAR TYPES
    // A scalar data type is something that has a finite set of possible values,
    // following some scale, i.e. each value can be compared to any other value as
    // either equal, greater or less. Example: integer (uint, int), etc
    let x: i8 = 120;
    println!("x = {}", x);

    let y: i128 = 150_140_130_120_000_000_000_000_000_000;
    println!("y = {}", y);

    let ch: char = ':';
    println!("ch = {}", ch);

    let floating_point: f32 = 10.12;
    println!("floating_point = {}", floating_point);

    // 0 = False and 1 = True
    let aBool: bool = true;
    let bBool: bool = 0; // which is false

    // COMPOUND DATA TYPE
    // In computer science, a composite data type or compound data type is any data type which
    // can be constructed in the program using the programming language's primitive data types
    // and other composite types. Example Array and Tuple.
    
    // TUPLE
    // a tuple is going to be a fixed length sequence of elements that is immutable.
    let tup: (i32, bool, char) = (1, true, 's');
}
