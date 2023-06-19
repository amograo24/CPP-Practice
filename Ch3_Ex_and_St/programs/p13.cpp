// Write a program that, given a temperature in Fahrenheit, 
// calculates and prints the temperature in Centigrade using the formula C = (F − 32) * 5/9.

#include <iostream>

using namespace std;

int main() {

    double f;
    cout << "Enter the temperature in Fahrenheit: ";
    cin >> f;
    cout << "Temperature in Celsius: " << (f-32)*(5.0/9) << endl;
    return 0;
}