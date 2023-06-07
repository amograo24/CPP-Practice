/*
Write a program that calculates and prints the area and 
the perimeter of a square when the size of one side is given.
*/

#include <iostream>

using namespace std;

int main() {
    unsigned int side;
    cout << "Enter the side of square: ";
    cin >> side;
    cout << "Area: " << side*side << "sq. units\nPerimeter: " << side*4 << " units" << endl;
    return 0;
}