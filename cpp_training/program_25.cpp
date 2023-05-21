// class 24 - 2nd october
#include <iostream>
#include <string>
using namespace std;

// syntax for function pointers

void printName() {
    cout << "My name is Bjorn" << endl;
}

// second example - start

int add(int x, int y) {
    return x + y;
}

void display() {
    int x, y = 0;
    cout << "this function is just displaying addition of two numbers\n";
    int (*addNumbers) (int, int);
    addNumbers = add;
    cout << "Enter first number - ";
    cin >> x;
    cout << "Enter second number - ";
    cin >> y;
    int sum = addNumbers(x, y);
    cout << "sum of two number = " << sum << endl;
}

// second example - end

// third example - start

void function_1() {
    cout << "printing from first function";
}

void function_2(void (*funcptr)()) {
    funcptr();
}

// third example - end

int main() {
    void (*funcPtr) ();
    funcPtr = printName;
    // funcPtr();
    // display();
    function_2(function_1);

    int a = 5;
    int *b = &a;

    cout << "value of a = " << a << endl;
    cout << "value of b (which is address of a) = " << b << endl;
    cout << "dereference value of b = " << *b << endl;

    cout << "pointer arithmetic\n";
    int sum = *b + 6;

    cout << "sum of dereferenced pointer and interger = " << sum << endl;

    cout << "direct operation on pointer variable (add) = " << (b + 4) << endl;
    cout << "direct operation on pointer variable (sub) = " << (b - 4) << endl;
}
