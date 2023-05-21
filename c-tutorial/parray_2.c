
#include <stdio.h>
#include <string.h>

int main() {
    char *presidents[5] = {
        "Washington",
        "Adams",
        "Jefferson",
        "Madison",
        "Monroe"
    };

    int x;
    char *ptr;

    for (x = 0; x < 5; x++) {
        // array notation
        // ptr = presidents[x];

        // pure pointer notation
        ptr = *(presidents + x);

        // while (*ptr != '\0') {
        // same as equal too  above
        while (*ptr) {
            putchar(*ptr);
            ptr++;
        }
        putchar('\n');
    }

    return 0;
}