#include <stdio.h>
#include <string.h>

int main() {
    char first[] = "This is string one. ";
    char second[] = "This is string two.\n";
    char buffer[64];

    // string copy, copies the first string into buffer
    strcpy(buffer, first);
    strcat(buffer, second);
    puts(buffer);
}

/**
 * Building a string in C
 * 1. create a char buffer (array) large enough to hold a new string
 * 2. copy the first string into the char buffer.
 * 3. Append, or concatenate, the second string onto the first string in the char buffer.
 *
 * String things to remember
 * 1. The string.h header file defines many string functions: strcmp(), strstr(), and so on.
 * 2. Ensure that string storage is large enough to hold the string, with room for the null character at the end.
 * 3. Use fgets() or another solid string-input function.
*/
