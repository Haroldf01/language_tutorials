#include <iostream>
using namespace std;

int main() {
    string languages[] = {
        "english",
        "spanish",
        "french",
        "german",
        "latin",
        "hindi",
        "urdu",
        "marthi",
        "punjabi",
    };

    int x = 4123454;
    int y = 4;

    int squares[y];

    cout << "size of x = " << sizeof(x) << endl;
    cout << "size of y = " << sizeof(y) << endl;
    cout << "size of str = " << sizeof(languages[1]) << endl;

    cout << "size of lang array = " << (sizeof(languages) / sizeof(languages[0])) << endl;

    // for (int i = 0; i < 5; i++) {
    //     cout << languages[i] << endl;
    // }

    for (int i = 0; i < sizeof(languages) / sizeof(languages[0]); i++) {
        cout << languages[i] << endl;
    }

    int numbers[] = {1, 3, 6, 9};

    for (int i = 0; i < sizeof(squares) / sizeof(squares[0]); i++) {
        squares[i] = numbers[i] * numbers[i];
    }

    for (int i = 0; i < sizeof(squares) / sizeof(squares[0]); i++) {
        cout << squares[i] << endl;
    }
}
