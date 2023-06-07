/*
Write a program that, given the time duration of a task 
in the number of hours, minutes, and seconds, calculates 
the duration in seconds.
*/

#include <iostream>

using namespace std;

int main() {
    unsigned int hours, minutes, seconds;

    cout << "Enter the number of hours: ";
    cin >> hours;

    cout << "Enter the number of minutes: ";
    cin >> minutes;

    cout << "Enter the number of seconds: ";
    cin >> seconds;

    cout << hours << " hours, " << minutes << " minutes, and " << seconds << " seconds";
    cout << " is " << hours*3600+minutes*60+seconds << " seconds!" << endl;
    return 0;
}