// Write a program that finds the maximum and 
// minimum values for a short and unsigned int in your computer.

#include <iostream>
#include <limits>

using namespace std;

int main() {
    
    cout << "unsigned short:\n";
    cout << "Max: " << numeric_limits<unsigned short>::max() << endl;
    cout << "Min: " << numeric_limits<unsigned short>::min() << endl;
    return 0;        
}