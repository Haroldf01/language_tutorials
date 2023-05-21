#include <iostream>
using namespace std;


int main() {
    // get user name and langauge as user input and greet them in the preffered langauge
    string name, lang = "";
    cout << "Enter you name - ";
    cin >> name;
    cout << endl << "Enter your native language - ";
    cin >> lang;

    string greetings[] = {
        "Hello",
        "Hola",
        "Bonjour",
        "Guten Tag"
    };

    if (lang == "english") {
        cout << greetings[0] << " " << name << endl;
    } else if (lang == "spanish") {
        cout << greetings[1] << " " << name << endl;
    } else if (lang == "french") {
        cout << greetings[2] << " " << name << endl;
    } else if (lang == "german") {
        cout << greetings[3] << " " << name << endl;
    } else {
        cout << "Invalid Input for language Mr. " << name << endl;
    }

    string languages[] = {
        "english",
        "spanish",
        "french",
        "german"
    };
}
