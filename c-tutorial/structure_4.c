#include <stdio.h>

int main()
{
    struct person
    {
        char name[64];
        int age;
    };

    // presetting a string into structure member
    // basically assigning values to president object of person structure
    struct person persident = {
        "George Washington", 67
    };

    printf("%s was %d years old\n", persident.name, persident.age);

    return 0;
}
