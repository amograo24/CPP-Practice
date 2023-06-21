#include <iostream>

using namespace std;

int main() {

    unsigned char inp;
    unsigned int cost, hours;
    cout << "Enter a character(c,b,t): ";
    cin >> inp;
    cout << "Enter number of hours: ";
    cin >> hours;

    switch(inp) {
        case 'c':
            cost=hours*2;
            break;
        case 'b':
            cost=hours*3;
            break;
        case 't':
            cost=hours*4;
            break;
    }

    cout << "Total cost for option \'" << inp << "\' for " << hours << " hours is: " << cost << endl;

    return 0;
}