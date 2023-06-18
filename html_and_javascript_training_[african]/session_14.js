// If else if block

let age = 2;

if (age > 18) {
    document.writeln('You are an adult');
} else if (age < 18 && age > 12) {
    document.writeln('you are a teenager');
} else if (age > 2 && age <= 12) {
    document.writeln('you are a child');
} else {
    document.writeln('infant');
}

/**
if (condition1) {
//  block of code to be executed if condition1 is true
} else if (condition2) {
//  block of code to be executed if the condition1 is false and condition2 is true
} else {
//  block of code to be executed if the condition1 is false and condition2 is false
}
*/

// another if else if example
// greet a person
document.writeln('<br>');
document.writeln('<br>');
document.writeln('<br>');

let time = 22;
let greetings = '';

if (time < 12) {
    greetings = "good morning";
} else if (time < 18) {
    greetings = "good day";
} else if (time < 22) {
    greetings = "good evening";
} else {
    greetings = "good night";
}

document.writeln(greetings);

document.writeln('<br>');
document.writeln('<br>');
document.writeln('<br>');

// switch statement

/**
switch(expression) {
case x:
// code block
break;
case y:
// code block
break;
default:
// code block
}
 */

let day;

switch (new Date().getDay()) {
    case 0:
        day = "sunday";
        break;
    case 1:
        day = "monday";
        break;
    case 2:
        day = "tuesday";
        break;
    case 3:
        day = "wednesday";
        break;
    case 4:
        day = "thursday";
        break;
    case 5:
        day = "friday";
        break;
    case 6:
        day = "satuarday";
        break;
}

document.writeln('<br>');
document.writeln('<br>');
document.writeln('<br>');

document.writeln('today - ');
document.writeln(day);

document.writeln('<br>');
document.writeln('<br>');
document.writeln('<br>');

let pet = "";

switch (pet) {
    case "cat":
        document.writeln("I have a cat");
        break;
    case "dog":
        document.writeln("hey, i have a dog, woof");
        break;
    case "parrot":
        document.writeln("i have a parrot");
        break;
    default:
        document.writeln("no pets");
}
