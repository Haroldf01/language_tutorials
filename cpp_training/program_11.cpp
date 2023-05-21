#include <iostream>
using namespace std;

// Note: There is no rule that a loop must be nested inside its own type.
// In fact, there can be any type of loop nested inside any type and to any level.
int main() {
    int for_i, while_j = 0;
    // cout << "for_i = " << for_i << " while_j = " << while_j << endl;

    for (; for_i < 3; ++for_i) {
        cout << "for_i - " << for_i << endl;
        while_j = 0;
        while (while_j <= 3) {
            cout << "while_j - " << while_j << endl;
            ++while_j;
        }
        cout << "----------" << endl;
    }


    int weeks = 3, days_in_week = 7;

    for (int i = 1; i <= weeks; ++i) {
        cout << "Week: " << i << endl;

        for (int j = 1; j <= days_in_week; ++j) {
            cout << "    Day:" << j << endl;
        }
    }

    // int j = 0;

    // for (; j < 5; j++) {
    //     cout << "this is infinite FOR loop" << endl;
    // }

    // while (true) {
    //     cout << "this is infinite WHILE loop" << endl;
    // }
}

// Home WORK
// https://www.geeksforgeeks.org/programs-printing-pyramid-patterns-c/
