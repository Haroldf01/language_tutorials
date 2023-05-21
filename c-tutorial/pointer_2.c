#include <stdio.h>

int main() {
    int pokey;
    int *p;

    pokey = 987;
    p = &pokey;

    printf("pokey &address %p\n", &pokey);
    printf("pointer p address - %p\n", p);

    printf("pokey value %d\n", pokey);
    printf("pointer value (dereferencing) - %d\n", *p);

    return 0;
}
