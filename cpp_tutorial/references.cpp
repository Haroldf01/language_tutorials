#include <iostream>
#include <string>
using namespace std;

int main() {
    // references:
    // a reference is a simple reference datatype that is less powerful but
    // safer than the pointer type inherited from C

    // Alias:
    // is a name that refers to a previously defined type

    int a = 2;
    // 'b' is referencing to the value of a, if either changed,
    // both will hold the same value
    int &b = a;
    int &c = b;
    int x = a;

    b = 5;

    cout << "a = " << a << endl;
    cout << "address of a = " << &a << endl;
    cout << "b = " << b << endl;
    cout << "address of b = " << &b << endl;
    cout << "c = " << c << endl;
    cout << "x = " << x << endl;
}
