#include <iostream>
using namespace std;

// pointers are variables that store address of other variables;
int main() {
    int a = 5;
    int *p = &a;
    cout << "value of a = " << a << endl;
    cout << "value of p which is address of a = " << p << endl;
    cout << "value of address of itself (p) = " << &p << endl;
    cout << "extracting decimal value of p, which is intern a.\n this is called as dereferencing = " << *p << endl;

    *p = 8;
    cout << "updating decimal value of a via pointer variable = " << a << endl;
    cout << "updating decimal value of pointer p, which is 'a' = " << *p << endl;
}
