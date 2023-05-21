// #########################################
// Questions:

// # Create a char pointer

// 1. Create char variables a, b, and c, plus char pointer *p.
// 2. Assign 'A' to variable a.
// 3. Initialize pointer p to variable a.
// 4. Assign a variable b the value referenced by pointer p.
// 5. initialize pointer p to variable c.
// 6. Assign to the pointer p the letter 'Z'.
// 7. Use a printf to display the values of variables a, b, and c.

// #########################################

#include <stdio.h>

int main() {
    char a, b, c, *p;
    a = 'A';
    p = &a;

    b = *p;

    p = &c;
    *p = 'Z';

    printf("A is %c and B is %c and C is %c\n", a, b, c);

    return 0;
}