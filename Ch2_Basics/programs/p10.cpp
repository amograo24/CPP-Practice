/*
Write a program that, given street number, 
street name, city name, state name, and zip code, 
prints the address in the following format.

street-number, street city, state zip-code
*/

#include <iostream>
#include <string>
using namespace std;

int main() {

    string street, city, state;
    int street_number, zip_code;

    cout << "Enter street number: ";
    cin >> street_number;

    cout << "Enter street name: ";
    cin >> street;

    cout << "Enter city: ";
    cin >> city;

    cout << "Enter state: ";
    cin >> state;

    cout << "Enter zip-code: ";
    cin >> zip_code;

    cout << street_number << ", "+street+" "+city+", "+state+" " << zip_code << endl; 

    return 0;
}