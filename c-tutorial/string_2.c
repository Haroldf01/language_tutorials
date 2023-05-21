#include <stdio.h>
#include <string.h>

int main() {
    char input[64];
    int len = 0;

    printf("Instructions: ");
    fgets(input, 64, stdin);
    len = strlen(input);
    printf("you typed %d characters of instructions.\n", len);
}
