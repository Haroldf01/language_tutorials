#include <stdio.h>

int main() {
    char a;

    printf("your choice (A, B, C): ");
    // & addressOf operator
    scanf("%c", &a);

    switch (a)
    {
    case 'A':
    case 'a':
        puts("You choose A");
        break;
    case 'B':
        puts("you choose b");
        break;
    case 'C':
        puts("you choose c");
        break;
    default:
        puts("invalid choice");
    }
}
