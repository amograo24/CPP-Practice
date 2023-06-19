// Write a program that inputs the number of seconds (a long value) and changes it to days, hours, minutes, and seconds.

#include <iostream>

using namespace std;

int main() {

    unsigned long inp;
    unsigned int hours, minutes, seconds;

    cout << "Enter the number of seconds: ";
    cin >> inp;
    hours=inp/3600;
    inp%=3600;
    minutes=inp/60;
    inp%=60;
    seconds=inp;

    cout << "Hours: " << hours << endl;
    cout << "Minutes: " << minutes << endl;
    cout << "Seconds: " << seconds << endl;

    return 0;
}