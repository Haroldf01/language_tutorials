#include <iostream>
using namespace std;


int main() {
    // cout << "1" << endl;
    // cout << "2" << endl;
    // cout << "3" << endl;
    // cout << "4" << endl;

    int i = 1;

    cout << "post increment - " << i++ << endl;
    cout << "no increment - " << i << endl;

    cout << "pre increment - " << ++i << endl;
    cout << "no increment - " << i << endl;

    // for (initialization; condition; incr/decr) {}
    cout << "post increment" << endl;
    for (int i = 1; i < 11; i++) {
        cout << i << endl;
        if (i == 5) {
            break;
        }
    }

    cout << "post Decrement" << endl;
    for (int i = 10; i > 0; i--) {
        cout << i << endl;
    }

    // cout << "pre increment" << endl;
    // for (int i = 1; i < 11; ++i) {
    //     cout << i << endl;
    // }

    // cout << "pre Decrement" << endl;
    // for (int i = 10; i > 0; --i) {
    //     cout << i << endl;
    // }
}

/*
For loop
while loop
do-while loop
*/
