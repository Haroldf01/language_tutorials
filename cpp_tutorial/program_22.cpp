// class 22 - 7th september
#include <iostream>
#include <string>
using namespace std;

void printValues(int arr[], int size);
int updateTheValue(int value);

int main() {
    int x = 25;
    int *y = &x;

    int &b = x;
    cout << "b before update = " << b << endl;
    b = updateTheValue(b);
    cout << "b after update = " << b << endl;
    cout << "x after update = " << x << endl;

    int arr[] = {4, 3, 4, 2};
    int *head = arr;

    for (int i = 0; i < 4; ++i) {
        head = arr + i;
        cout << *head << endl;
    }

    int* z = y;
    cout << "y = " << y << endl;
    cout << "z = " << *z << endl;

    // printValues(arr, 4);
}

void printValues(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << endl;
    }
}

int updateTheValue(int value) {
    value -= 15;
    cout << "value from update function = " << value << endl;
    return value;
}
