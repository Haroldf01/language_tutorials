// class 24 - 16th september
#include <iostream>
#include <string>
using namespace std;

void exampleOfDereferencing();

// function overloading
void print();
void print(int a);
void print(int a, int b);
void print(string name);

// function overloading -- example
bool comparsion(string first, string second);
bool comparsion(int first, int second);
bool comparsion(float first, float second);


int main() {
    // print();
    // print(1, 4);
    // print("");
    // print(1);

    cout << "comparision with integers = " << comparsion(3, 1) << endl;
    cout << "comparision with strings = " << comparsion("aliya", "aliya") << endl;
}

bool comparsion(string first, string second) {
    return first == second;
}

bool comparsion(int first, int second) {
    return first >= second;
}

void print() {
    cout << "first print -- empty" << endl;
}

void print(string name) {
    cout << "fourth print -- one args -- string" << endl;
}

void print(int a) {
    cout << "second print -- one argument" << endl;
}

void print(int a, int b) {
    cout << "third print -- two arguments" << endl;
}


void exampleOfDereferencing() {
    int a = 5;
    int* b = &a;
    int c = *b;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "refernce of a = " << &a << endl;
    cout << "value of a via b (dereferencing) = " << *b << endl;
    cout << "value of c (dereferencing) = " << c << endl;
}
