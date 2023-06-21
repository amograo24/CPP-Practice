#include <iostream>

using namespace std;

int main() {

    unsigned int units, cost=10;
    cout << "Enter the total units: ";
    cin >> units;

    // cout << (units>12?12:units) << endl;
    units = units>12?12:units;

    cout << "The total cost for " << units << " unit(s) at a rate of $10 per unit upto 12 units is: ";
    cout << units*cost << endl;

    return 0;
    
}