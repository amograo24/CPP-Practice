// Write a program that finds the minimum and maximum values for a float and a double in your computer.

#include <iostream>
#include <limits>


using namespace std;

int main() {
    
    cout << "float:\n";
    cout << "+ve Max: " << numeric_limits<float>::max() << endl;
    cout << "+ve Min: " << numeric_limits<float>::min() << endl;
    cout << "-ve Min: " << -numeric_limits<float>::min() << endl;
    cout << "-ve Max: " << -numeric_limits<float>::max() << endl;


    cout << "\ndouble:\n";
    cout << "+ve Max: " << numeric_limits<double>::max() << endl;
    cout << "+ve Min: " << numeric_limits<double>::min() << endl;
    cout << "-ve Min: " << -numeric_limits<double>::min() << endl;
    cout << "-ve Max: " << -numeric_limits<double>::max() << endl;
    
    return 0;        
}