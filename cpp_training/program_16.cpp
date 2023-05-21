#include <iostream>
#include <string>
using namespace std;

int main() {
    string sentence = "aliya is learning cpp";
    char sen[sentence.length()];

    // for (int i = 0; i <= sentence.length(); i++) {
    //     // cout << sentence[i] << '\t';
    //     sen[i] = sentence[i];
    // }

    // for (int i = 0; i <= sizeof(sen) / sizeof(sen[0]); i++) {
    //     cout << sen[i] << '\t';
    // }

    int language = 0;
    cout << "Choose one of the language:\nEnglish(1)\nFrench(2)\nGerman(3)\nSpanish(4)" << endl;
    cin >> language;
    switch(language) {
        case 1:
            cout << "Hello aliya";
            break;
        case 2:
            cout << "bonjour aliya";
            break;
        case 3:
            cout << "guten tag aliya";
            break;
        case 4:
            cout << "hola aliya";
            break;
        default:
            cout << "not supported language";
    }
}
