#include <iostream>
using namespace std;


int main() {
    // Find the sum of first n Natural Numbers
    // declaration
    int num, sum;
    // initialization
    sum = 0;

    cout << "Enter a positive number: ";
    cin >> num;

    for (int i = 1; i <= num; ++i) {
        sum += i;
        cout << "sum = " << sum << endl;
    }

    cout << "sum - " << sum << endl;

    int i = 0;

    while (i < 10) {
        cout << i << endl;
        i++;
    }
}
