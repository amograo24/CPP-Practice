// Write a program that, given a temperature in Celsius, calculates and prints the
// temperature in Fahrenheit using the formula F = (9/5) C + 32.

#include <iostream>

using namespace std;

int main() {

    double c;
    cout << "Enter the temperature in Celsius: ";
    cin >> c;
    cout << "Temperature in Fahrenheit: " << (9.0/5)*c + 32.0 << endl;
    return 0;
}