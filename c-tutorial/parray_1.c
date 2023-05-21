#include <stdio.h>
#include <string.h>

int main() {
    char *months[12] = {
        "January",
        "Februray",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December"
    };

    int x;

    for (x = 0; x < 12; x++) {
        printf("%s\n", months[x]);
        // to see memory locations of each element in an array
        printf("%p\n", months[x]);
    }
    return 0;
}
