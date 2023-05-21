// class 20 - 5th september
#include <iostream>
#include <string>
using namespace std;

double celsius();
double to_fahrenheit(float temperature);
int addValueOfArray(int arr[4]);
float add(int num_1, int num_2, float num_3);


int main() {
    // double temperatureInCelsius = celsius() + 3;
    // cout << "temperature in celsius = " << temperatureInCelsius << endl;
    // double temperatureInFahrenheit = to_fahrenheit(temperatureInCelsius);
    // cout << "temperature in ferhenheit = " << temperatureInFahrenheit << endl;

    float sum = add(2, 5, 3.2);
    cout << "addition of 3 numbers = " << sum << endl;

    // int arr[] = {1, 2, 3, 5, 3};
    // int sizeofArr = sizeof(arr);
    // cout << "size of arr from main = " << sizeofArr << endl;
    // cout << "addValueOfArray SUM = " << addValueOfArray(arr) << endl;
}

float add(int num_1, int num_2, float num_3) {
    return num_1 + num_2 + num_3;
}

int addValueOfArray(int arr[5]) {
    int sum = 0;
    int sizeofArr = sizeof(arr);
    cout << "size of arr = " << sizeofArr << endl;
    for (int i = 0; i <= sizeof(arr) / sizeof(arr[0]); i++) {
        sum += arr[i];
    }
    return sum;
}

double celsius() {
    float temperature = 0.0;
    cout << "Enter the temperature = ";
    cin >> temperature;
    return temperature;
}

double to_fahrenheit(float temperature) {
    return (temperature * 1.8) + 32;
}
