#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, x;
    cin >> n;
    cout << n << endl;
    // clear's the error if cin has in the console
    cin.clear();
    // ignores the number of characters typed in the first argument
    // and move to the next line
    cin.ignore(1000, '\n');
    cin >> x;
    cout << x << endl;
}
