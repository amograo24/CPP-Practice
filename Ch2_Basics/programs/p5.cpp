/*
Write a program that inputs four integer values and 
calculates and prints the sum of them.
*/

#include <iostream>

using namespace std;

int main() {
    int a,b,c,d;
    cout << "Enter first integer: ";
    cin >> a;
    cout << "Enter second integer: ";
    cin >> b;
    cout << "Enter third integer: ";
    cin >> c;
    cout << "Enter fourth integer: ";
    cin >> d;
    
    cout << "The sum is: " << a+b+c+d << endl;
    return 0;
}