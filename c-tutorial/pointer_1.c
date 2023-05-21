#include <stdio.h>

int main()
{
    int pokey;
    int *p;
    p = &pokey;
    printf("pokey &address %p\n", &pokey);
    printf("pointer p value - %p\n", p);

    return 0;
}
