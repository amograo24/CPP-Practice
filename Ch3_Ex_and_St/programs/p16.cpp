// Write a program to create a customer’s bill for a company. The company sells only three products: 
// TV sets, DVD players, and remote controllers. The unit prices are $1400.00, $220.00, and $35.20, respectively. 
// The program must read from the keyboard the quantity of each piece of equipment purchased. 
// It then calculates the cost of each item, the subtotal, and the total cost after an 8.25 percent sales tax.

#include <iostream>

using namespace std;

int main() {

    const double tv_price = 1400.00, dvd_price = 220.00, remote_price = 35.20;
    double subtotal;
    unsigned int tv_qty, dvd_qty, remote_qty;
    // unsigned tv_qty, dvd_qty, remote_qty; // works without int lol.

    cout << "Enter the quantity of TV sets: ";
    cin >> tv_qty;
    cout << "Enter the quantity of DVD players: ";
    cin >> dvd_qty;
    cout << "Enter the quantity of remote controllers: ";
    cin >> remote_qty;

    subtotal = tv_qty * tv_price + dvd_qty * dvd_price + remote_qty * remote_price;
    cout << "Subtotal: " << subtotal << endl;
    cout << "Total Inclusive of Tax: " << subtotal * 1.0825 << endl;
    return 0;
}