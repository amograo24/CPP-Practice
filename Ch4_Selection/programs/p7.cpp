#include <iostream>

using namespace std;

int main() {

    unsigned int quantity;
    double unit_price,final_price=0;

    cout << "Enter the quantity: ";
    cin >> quantity;
    cout << "Enter the unit price: ";
    cin >> unit_price;

    if(quantity<10) final_price=quantity*unit_price;
    else if(quantity>=10 && quantity<50) final_price=0.97*unit_price*quantity;
    else if(quantity>=50 && quantity<99) final_price=0.95*unit_price*quantity;
    else if(quantity>=100) final_price=0.9*unit_price*quantity;

    cout << "For " <<  quantity << " items of $" << unit_price << " each, the final price in our scheme is: $" << final_price << endl;

    
}