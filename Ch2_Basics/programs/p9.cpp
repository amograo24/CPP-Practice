/*
Write a program that calculates the sales tax of a 
transaction given the sale amount. Assume that the tax 
is 9 percent. Use a constant to define the tax rate. Run your 
program several times, each with different values for sale amount. 
Use the following format for output.

Sale amount: ...
Tax amount: ...
Total amount due: ...
*/

#include <iostream>

using namespace std;

int main() {
    const float tax_percent = 0.09;
    float sales_amt,tax_amt;

    cout << "Enter the sales amount: ";
    cin >> sales_amt;

    tax_amt=sales_amt*tax_amt;

    cout << "Sale amount due: " << sales_amt << endl;
    cout << "Tax amount due: " << tax_amt << endl;
    cout << "Total amount due: " << sales_amt+tax_amt << endl;
    
    return 0;
}