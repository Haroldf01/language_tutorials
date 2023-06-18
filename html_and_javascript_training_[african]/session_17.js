let arr = [1, 2, "Three", true, null];

arr[5] = "new element";

document.writeln(arr[5]);

document.writeln('<br>');

// how to retrieve element - syntax

// arrayName[index]


arr[2] = "my name is ........";
document.writeln(arr[2]);


// another way of creating an array

document.writeln('<br>');


let emptyArray = new Array();
let scores = new Array(3, 3, 4, 5, 6, 6, 6, 7);

document.writeln(scores);
document.writeln('<br>');

scores[0] = "element_1";
scores[1] = "element_2";
scores[2] = "element_3";

scores.push(2);
scores.push(4);
scores.push(6);

document.writeln('<br>');
document.writeln(scores);

scores.unshift("hey");

document.writeln('<br>');
document.writeln('<br>');
document.writeln(scores);

// getting size of an array
document.writeln('<br>');

document.writeln(scores.length);

// Removing an element from the end of an array

scores.pop();

document.writeln('<br>');
document.writeln('<br>');
document.writeln(scores);

// getting size of an array
document.writeln('<br>');

document.writeln(scores.length);

// Removing an element from the beginning of an array
scores.shift()

document.writeln('<br>');
document.writeln('<br>');
document.writeln(scores);

// Finding an index of an element in the array
document.writeln('<br>');
document.writeln('<br>');
document.writeln(scores.indexOf('element_1'));

// variable is an array or not
document.writeln(Array.isArray(scores));




document.writeln('<br>');
document.writeln('<br>');
document.writeln('<br>');
document.writeln('<br>');
document.writeln('<br>');
document.writeln('<br>');
document.writeln('<br>');
document.writeln('<br>');
document.writeln('<br>');
document.writeln('<br>');
document.writeln('<br>');
document.writeln('<br>');
document.writeln('<br>');
document.writeln('<br>');
document.writeln('<br>');
document.writeln('<br>');
document.writeln('<br>');
document.writeln('<br>');
document.writeln('<br>');
document.writeln('<br>');
document.writeln('<br>');
document.writeln('<br>');
document.writeln('<br>');
document.writeln('<br>');
document.writeln('<br>');
