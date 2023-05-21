#include <iostream>
using namespace std;

int main() {
    int x = 5;

    int intArr[x];
    intArr[0] = 1;
    intArr[1] = 2;
    intArr[2] = 3;

    int arr[5] = {2, 1, 3, 4, 5};
    string arr_1[] = {"hey", "this", "is", "another", "way"};

    // NOTE: extended initializer lists only available with -std=c++11
    // float arr_2[] {1.0, 2.4, 3.2, 4, 5};

    // NOTE:
    // sizeof() is a compile-time operator that determines the size, in bytes, of a variable or data type.
    // It can be used to get the size of classes, structures, unions and any other user defined data type.

    // get number of elements in an array
    cout << "size of an array = " << (sizeof(arr) / sizeof(arr[0])) << endl;

    int squares[x];

    // assign squares to an array
    for (int i = 1; i <= sizeof(squares) / sizeof(squares[0]); i++) {
        squares[i] = i*i;
    }

    // looping over an array
    for (int i = 1; i <= sizeof(squares) / sizeof(squares[0]); i++) {
        cout << "square of = " << i << " = " << squares[i] << endl;
    }
}
