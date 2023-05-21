// class 21 - 6th september
#include <iostream>
#include <string>
using namespace std;

void myAge(int age);

void myfunction(string name = "") {
    if (name != "") {
        cout << "hello " << name << endl;
    } else {
        cout << "Name cannot be empty" << endl;
    }
}

int main() {
    int a = 4;
    int &b = a;
    cout << "address of b = " << &b << endl;

    b = 6;

    cout << "value of a = " << a << endl;
    cout << "address of a = " << &a << endl;
    cout << "value of b = " << b << endl;
    cout << "address of b = " << &b << endl;
}

void myAge(int age) {
    cout << "my age = " << age << endl;
}
