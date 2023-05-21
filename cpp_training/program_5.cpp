#include <iostream>
using namespace std;


int main() {
    // int x, y, z;
    // cout << "Enter value of X - ";
    // cin >> x;
    // cout << "Enter value of Y - ";
    // cin >> y;
    // cout << "Enter value of Z - ";
    // cin >> z;

    cout << "true - " << true << endl;
    cout << "false - " << false << endl;

    bool x = -1;
    bool y = 1;
    bool z = 0;

    cout << "x - " << x << endl;
    cout << "y - " << y << endl;
    cout << "z - " << z << endl;

    // cout << "not y " << !y << endl;

    if (!y) {
        cout << "this is true" << endl;
    } else {
        cout << "this is false" << endl;
    }

    if (x < y && !y > z) {
        cout << "if block" << endl;
    } else {
        cout << "else block" << endl;
    }
}
