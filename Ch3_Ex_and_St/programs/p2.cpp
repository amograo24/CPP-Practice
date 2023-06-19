// Write a program that finds the minimum and maximum values for a long, and a long long in your computer.

#include <iostream>
#include <limits>

using namespace std;

int main() {
    
    cout << "long:\n";
    cout << "Max: " << numeric_limits<long>::max() << endl;
    cout << "Min: " << numeric_limits<long>::min() << endl;

    cout << "long long:\n";
    cout << "Max: " << numeric_limits<long long>::max() << endl;
    cout << "Min: " << numeric_limits<long long>::min() << endl;

    // appears to be the same thing in my computer, however, might be different in other computers.
    return 0;        
}