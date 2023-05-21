#include <stdio.h>

#define INPUT_MAX 16

int main() {
    char input[INPUT_MAX];

    printf("instructions: ");
    fgets(input, INPUT_MAX, stdin);
    puts("Thank you! Here are your instructions: ");
    puts(input);
}
