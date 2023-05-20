#include <iostream>
using namespace std;


int main() {
    // int numOfInput, number;
    // cout << "Enter num of input - ";
    // cin >> numOfInput;

    int counter = 1;
    // int sum = 0;

    // cout << "numOfInput == " << numOfInput << endl;

    // Sum of Positive Numbers Only
    // while (counter <= numOfInput) {
    //     cout << "Enter a value for number - ";
    //     cin >> number;
    //     if (number > 0) {
    //         sum += number;
    //     }
    //     counter++;
    // }

    // cout << "sum of all input - " << sum << endl;

    /*
    do {
        loop body
    } while(condition);
    */

    // while (counter < 1) {
    //     cout << "hey";
    //     counter++;
    // }

    // cout << "------- WHILE LOOP -------" << endl;
    // while (counter <= 10) {
    //     cout << "counter = " << counter << endl;
    //     counter++;
    // }

    // do {
    //     cout << "hello aliya" << endl;
    // } while(counter < 1);

    // counter = 1;

    // cout << "------- DO WHILE LOOP -------" << endl;
    // do {
    //     cout << "counter = " << counter << endl;
    //     counter++;
    // } while(counter <= 10);

    int a = 10;

   // do loop execution
   do {
      if( a == 15) {
         // skip the iteration.
         a = a + 1;
         continue;
      }
      cout << "value of a: " << a << endl;
      a = a + 1;
   }
   while( a < 20 );
}
