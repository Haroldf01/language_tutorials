#include <iostream>
using namespace std;


int main() {
    int x = 12;
    int y = 3;

    // cout << "This is the remainder after dividing -- " << (x % y) << endl;

    // if (x % y || x / y) {
    //     cout << "this is if statement" << endl;
    //     cout << "x -- " << x << endl;
    //     x = 18;
    //     cout << "x -- " << x << endl;
    // }

    if (x / y) {
        cout << "Another IF - x division by y -- " << (x / y) << endl;
        if (x < y) {
            cout << "X is greter then y" << endl;
        } else {
            cout << "X is not greter then y" << endl;
        }
    }

    if (x - y * 2 / 3) {
        cout << "answer - " << (x - y * 2 / 3) << endl;
    }
}
