#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int* p = &a;

    // pointer arithmetic
    cout << "Address of p is = " << p << endl;
    cout << "value of address p is = " << *p << endl;
    cout << "size of integer is " << sizeof(int) << " bytes\n";
    cout << "address p+1 is = " << (p+1) << endl;
    cout << "value at address p+1 is = " << *(p+1) << endl;
}
