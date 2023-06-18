/**
 * if statement syntax
 *
 * if (condition) {
 * block of code to be executed if the condition is true
 * }
*/

let number = 2;
if (number > 0) {
    document.writeln('Condition is true');
}

let anotherNumber = -2;

if (anotherNumber > 0) {
    document.writeln('this will be skipped and code after if will  be executed');
}

document.writeln('<p>----------------</p>');
document.writeln('This is will executed');

/**
 * syntax of if-else
 *
 * if (condition) {
 *  block of code to be executed if the condition is true
 * } else {
 *  block of code to be executed if the condition is false
 * }
 */

document.writeln('<p>----------------</p>');

let age = 9;

if (age < 12) {
    document.writeln('you are a minor');
} else {
    document.writeln('you are not a minor');
}
