// class 19 - 4th september
#include <iostream>
#include <string>
using namespace std;

void myFunction();
int myFavouriteNumber();
string personName(string name);


int main() {
    // myFunction();
    // myFavouriteNumber();
    personName("aliya");
}

string personName(string name) {
    cout << "name = " << name << endl;
}

void myFunction() {
    int var_1 = 21, var_2 = 22;
    string name = "aliya";
    cout << "add = " << (var_1 + var_2) << endl;
    cout << "this is hello world" << endl;
}

int myFavouriteNumber() {
    int num = 0;
    while (true) {
        cout << "enter number between 1 - 10" << endl;
        cin >> num;
        if (num == 7) break;
        else cout << "This isn't my Favourite Number. Try another number" << endl;
    }
}
