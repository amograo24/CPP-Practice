#include <iostream>
#include <string>

using namespace std;

int main() {

    unsigned int day, month, year, weekday;
    string day_text; 

    cout << "Enter day, month, year: "; cin >> day >> month >> year;
    // month%=12; ditch input validation for now.

    // (month==1||month==2)?(month+=12;year):month;

    if(month==1||month==2) {
        month+=12;
        year--;
    }
    cout << "According to formula: \n";
    cout << "Day: " << day << endl;
    cout << "Month: " << month << endl;
    cout << "Year: " << year << endl << endl;


    weekday = (day + 26 * (month + 1) / 10 +year + year / 4 - year /100 + year /400 ) % 7;
    cout << "Weekday: " << weekday << endl;

    switch(weekday) {
        case 0: day_text = "Saturday"; break;
        case 1: day_text = "Sunday"; break;
        case 2: day_text = "Monday"; break;
        case 3: day_text = "Tuesday"; break;
        case 4: day_text = "Wednesday"; break;
        case 5: day_text = "Thursday"; break;
        case 6: day_text = "Friday"; break;
        
    }

    cout << "Weekday: " << day_text << endl;


    return 0;
}