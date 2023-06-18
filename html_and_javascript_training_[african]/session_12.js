document.writeln('<h1>Logical operators</h1>');

// Define some variables for testing comparsion
let x = 10;
let y = 15;
// below z is string
let z = '10';

// document.writeln('<br>');
document.writeln('<p>--------------------------</p>');
// document.writeln('<br>');


a = true;
b = false;
c = 1;
d = 0;

document.writeln(a && b);
document.writeln('<p>--------------------------</p>');
document.writeln(a || b);
document.writeln('<p>--------------------------</p>');
document.writeln(!(a && b) || (c && d));

document.writeln('<p>--------------------------</p>');

// example of no zero negative number
document.writeln(Boolean(-1))
document.writeln('<p>--------------------------</p>');
document.writeln(Boolean(0))
document.writeln('<p>--------------------------</p>');
document.writeln(Boolean(1))


document.writeln('<h1>Conditional Operator</h1>');

// Syntax is as follows
// variablename = (condition) ? value1:value2

// let age = 19;
let age = 14;
let canVote = (age >= 18) ? true : false;
document.writeln(canVote);
