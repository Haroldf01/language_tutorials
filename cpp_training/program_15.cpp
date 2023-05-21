#include <typeinfo>
#include <iostream>
using namespace std;

int main() {
    // Type Casting
    float f = 14.6;
    char c = 'A';
    double d = 987.45654;
    int i = 45;

    double sum_d = d + f;
    int sum = d + f;

    double sum_i = i + i;

    int x = 10;
    char y = 'a';
    x = x + y;

    // cout << "X = " << x << endl;
    // cout << "C = " << c << endl;
    // cout << "C converted = " << (int)c << endl;

    // cout << "sum of two integers = " << sum_i << endl;

    // cout << "double = " << sum_d << endl;
    // cout << "int sum = " << sum << endl;

    float fToInt = (int)f;
    // cout << "value of iToFloat = " << fToInt << endl;
    // cout << "value of int to float = " << ((float)i) << endl;
    // cout << "value of int to float = " << ((double)i) << endl;

    // string operations
    string str = "this is a string";
    string s = "t";
    cout << "size of string in bytes = " << sizeof(str) << endl;
    cout << "size of string in bytes = " << sizeof(s) << endl;

    cout << "get string length = " << str.length() << endl;
    cout << "get string length = " << s.size() << endl;

    char subChar = str[5];
    cout << "6th char of str string = " << subChar << endl;
    str[5] = 's';
    cout << "6th char of str string = " << str[5] << endl;

    string subString = str.substr(10, 15);
    cout << "sub string of str string = " << subString << endl;

    // string replaced_str = s.find("Hello");
    int find_var = str.find("is");
    cout << "index of string 'is' = " << find_var << endl;

    // looping over strings and doing some operations
}
