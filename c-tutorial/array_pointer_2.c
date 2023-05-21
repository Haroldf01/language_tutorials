#include <stdio.h>

int main() {
    int array[] = {1, 2, 4, 5, 6};
    int x;
    int *aptr;

    aptr = array; // no & needed for an array

    for (x = 0; x < 5; x++) {
        printf("Element %d: %d\n", x + 1, *aptr);
        aptr++;
    }

    return 0;
}
