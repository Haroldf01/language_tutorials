#include <iostream>
#include <string>
using namespace std;

int main() {
    char operation = 'a';
    cout << "choose which to perform" << endl;
    cin >> operation;
    int x = 21, y = 23, res;

    switch (operation) {
        case 'a':
        res = x + y;
        cout << "Addition = " << res << endl;
        break;
        case 's':
        res = x - y;
        cout << "Subtraction = " << res << endl;
        break;
        case 'm':
        res = x * y;
        cout << "multiplication = " << res << endl;
        break;
        case 'd':
        res = x / y;
        cout << "division = " << res << endl;
        break;
        default:
        cout << "invalid operations";
    }

    // Ternary operator

    string result = res > 0 ? "number is positive" : "number is negative";
    cout << "result = " << result << endl;
}
