/*
Write a program that prompts the user to enter two 
integers. It then prints their sum. Run your program 
several times, each with different values for variables.
*/

#include <iostream>

using namespace std;

int main() {
    int a,b;
    cout << "Enter first integer: ";
    cin >> a;
    cout << "Enter second integer: ";
    cin >> b;
    
    cout << "The sum is: " << a+b << endl;
    return 0;
}