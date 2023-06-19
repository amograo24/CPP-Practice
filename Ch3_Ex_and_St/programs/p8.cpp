// Write a program that, given the time duration of a 
// task in the number of hours, minutes, and seconds, calculates duration in seconds.

#include <iostream>

using namespace std;

int main() {
    
    unsigned int ihours, iminutes, iseconds, fseconds;
    cout << "Enter hours minutes, seconds seperated by a whitespace or enter button: ";
    cin >> ihours >> iminutes >> iseconds;
    fseconds=ihours*3600+iminutes*60+iseconds;
    cout << "Total seconds: " << fseconds << endl;
    return 0;        
}