#include <stdio.h>

int main() {
    int array[] = {1, 2, 4, 5, 6};
    int *aptr;

    aptr = array; // no & needed for an array
    printf("first Element %d\n", *aptr);

    // accessing second element using pointer arithmetic
    aptr = aptr + 1;
    printf("SECOND Element %d\n", *aptr);

    // last element would be
    // aptr = aptr + 3;
    // printf("LAST Element %d\n", *aptr);

    // short hand way for accessing LAST Element would be
    printf("The LAST Element is %d \n", *(aptr + 3));

    return 0;
}
