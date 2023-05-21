#include <iostream>
using namespace std;


int main() {
    int x = 27;
    int y = 2;
    int z = 2;

    bool test = y < x && !(x == z);
    cout << test << endl;
}


// List of operators
// arithmetic operator = +, -, *, /, %, ++, --
// assignment operators
// comparison operators
// logical operators
// Bitwise operators


// int main() {
//     int x, y;
//     cout << "Enter a value for X" << endl;

//     cin >> x;
//     cin.clear();
//     cin.ignore(1000, '\n');
//     cout << "Enter a value for Y" << endl;
//     cin >> y;
//     cout << "X = " << x << endl;
//     cout << "Y = " << y << endl;
// }
