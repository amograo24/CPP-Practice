// An hourly employee is paid regular pay per hour for 40 hours a week. 
// She will be paid 60 percent more for every hour she works over 40 hours. 
// Write a program that asks an employee to enter the number of extra hours worked last week and 
// the weekly rate and then calculates and prints total payment.

#include <iostream>

using namespace std;

int main() {

    unsigned int extra_hours;
    double weekly_rate;

    cout << "Enter the number of extra hours worked last week: ";
    cin >> extra_hours;
    cout << "Enter the weekly rate: ";
    cin >> weekly_rate;

    cout << "Total Payement: " << weekly_rate + 1.6*(weekly_rate/40)*extra_hours << endl;

    
    return 0;
}