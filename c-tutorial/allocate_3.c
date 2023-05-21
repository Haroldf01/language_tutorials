// Memory Allocation Challenge

// Question:

// # Write a 'Hello' Program

// 1. Allocate a text input (char) buffer.
// 2. Prompt the user to type their name.
// 3. Store the name in the input buffer.
// 4. Display the text input as a greeting.

// Solution: (did myself)

#include <stdio.h>
#include <stdlib.h>

#define SIZE 24

int main() {
    char *name;
    name = malloc( sizeof(char) * SIZE );
    printf("memory of name %p\n", name);
    if (name == NULL) {
        puts("unable to allocate memory");
        return 1;
    }
    puts("Enter your name");
    fgets(name, SIZE, stdin);
    printf("Hello %s", name);

    return 0;
}
