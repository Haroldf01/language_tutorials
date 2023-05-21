// class 23 - 12th september
#include <iostream>
#include <string>
using namespace std;

void swap(int* x, int* y);
// A pointer is just a variable that holds a "Memory Address"
void callByValueSwap(int first, int second);

int main() {
    int x = 50, y = 30;
    swap(&x, &y);
    // callByValueSwap(x, y);

    cout << "value of x main function = " << x << endl;
    cout << "value of y main function = " << y << endl;
}

void swap(int* x, int* y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;

    cout << "value of x inside swap function = " << *x << endl;
    cout << "value of y inside swap function = " << *y << endl;
}

void callByValueSwap(int first, int second) {
    int temp;
    temp = first;
    first = second;
    second = temp;

    cout << "value of x inside callByValueSwap = " << first << endl;
    cout << "value of y inside callByValueSwap = " << second << endl;
}

// https://www.javatpoint.com/call-by-value-and-call-by-reference-in-cpp
// https://www.geeksforgeeks.org/references-in-c/
