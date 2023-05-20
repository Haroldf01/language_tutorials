#include <iostream>
using namespace std;

// Arrays are used to store multiple values in a single variable,
// instead of declaring separate variables for each value.

int main() {
    // dataType arrayName[numOfElements] = {values, comma-separated};
    int myNum[3] = {10, 20, 30};

    string hobbies[2];

    string names[3] = {
        "aliya",
        "rahul",
        "bjorn"
    };

    string subjects[5] = {
        "science",
        "mathematics"
    };

    cout << "subjects array second value = " << subjects[1] << endl;
    subjects[1] = "history";
    cout << "subjects array second value updated tooo = " << subjects[1] << endl;
    cout << "subjects array third value = " << subjects[2] << endl;


    cout << "Enter a value for subjects = ";
    cin >> subjects[2];
    cout << "subjects array third value = " << subjects[2] << endl;

    hobbies[0] = "playing";
    hobbies[1] = "dancing";
    hobbies[2] = "siging";
    hobbies[3] = "programming";

    // for (int i = 0; i <= names.size(); i++) {
    //     cout << i << endl;
    // }

    // access the elements of an array
    // indexing == index starts with 0
    // cout << hobbies[0] << endl;
    // cout << hobbies[1] << endl;
    // cout << hobbies[2] << endl;
    // cout << hobbies[3] << endl;

    // names[4] = "ragnar";
    // cout << names[2] << endl;
    // cout << names[3] << endl;
}

// https://www.w3schools.com/cpp/cpp_arrays.asp
// https://www.programiz.com/cpp-programming/arrays
// https://www.geeksforgeeks.org/arrays-in-c-cpp/


// ----
// https://www.geeksforgeeks.org/programs-printing-pyramid-patterns-c/
// https://www.w3schools.com/cpp/cpp_arrays.asp
// https://www.w3schools.com/cpp/cpp_arrays_loop.asp
// https://stackoverflow.com/questions/20234898/correct-way-of-looping-through-c-arrays
