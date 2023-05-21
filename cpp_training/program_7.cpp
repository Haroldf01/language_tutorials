#include <iostream>
#include <string>
using namespace std;

int main()
{
    int x;
    string n, s, k;
    char varChar = 'G';
    char G;

    cout << "Hello what is your name? - ";
    cin >> n;
    cout << "enter value of s - ";
    cin >> s;
    if (n < s)
    {
        cout << "strings are matching" << endl;
    }

    cin >> n;
    cout << "My name is Computer, hello " << n << "How are you?" << endl;
    cout << "Enter character G for good.";
    cin >> G;

    int A = 20;
    int B = 10;
    int C = 32;

    cout << "You are going to be asked to solve a series of problems. A=20 B=10 C=32";
    cout << "What is A-C?";

    cin >> s;
    if (A == -12)
    {
        cout << "Good! Now What is A+B+C?";
    }
    else
    {
        cout << "Opps try again!";
    }
    cout << "Enter value of k";
    cin >> k;
    if (B == 62)
    {
        cout << "Fantastic!";

        cout << "IsCodingFun"
             << "\n";
    }
    bool IsCodingFun = true;
}