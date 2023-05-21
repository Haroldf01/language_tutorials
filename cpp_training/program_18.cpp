#include <iostream>
#include <string>
using namespace std;

void function_one() {
    int x = 25, y = 24;
    float sum = 1.0;
    sum = x + y;
    cout << "sum of x + y = " << sum << endl;
}

int add() {
    int x = 25;
    float y = 4.2;
    float sum = x + y;
    // cout << "sum from add = " << sum << endl;
    return sum;
}

string get_name() {
    string name;
    cout << "Enter your name = ";
    cin >> name;
    return name;
}

char get_initial_of_my_name() {
    string name = get_name();
    char initial = name[0];
    return initial;
}

int main() {
    // function_one();
    // int x = add();
    // cout << "function value with x = " << x << endl;
    // cout << "raw function call = " << add() << endl;
    // cout << x + 21 << endl;

    // cout << "my name = " << get_name() << endl;
    cout << "intial of my name = " << get_initial_of_my_name() << endl;
}
