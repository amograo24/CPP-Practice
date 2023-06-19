// Write a program that, given a number of hours, 
// calculates the number of weeks, days, and hours 
// included in that number.

#include <iostream>

using namespace std;

int main() {
    
    unsigned int hours, weeks, days, input;

    cout << "Enter hours: ";
    cin >> input;

    weeks=input/(24*7);
    input=input%(24*7);
    days=input/24;
    // input=input%24;
    // hours=input/1;
    hours=input%24;

    cout << "Weeks: " << weeks << endl;
    cout << "Days: " << days << endl;
    cout << "Hours: " << hours << endl;


    
    return 0;        
}