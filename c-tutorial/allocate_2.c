#include <stdio.h>
#include <stdlib.h>

int main() {
    int *scores, x;
    scores = malloc( sizeof(int) * 4 );

    if (scores == NULL) {
        puts("unable to allocate memory");
        return 1;
    }

    *(scores + 0) = 100;
    *(scores + 1) = 97;
    *(scores + 2) = 105;
    *(scores + 3) = 200;

    for (x = 0; x < 4; x++)
        printf("scores %d: %d\n", x+1, *(scores + x));

    return 0;
}
