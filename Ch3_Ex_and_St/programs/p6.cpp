// Write a program that, given a three-digit integer, 
// constructs and prints another integer whose digits 
// are in the reverse order of the given one. For example, 
// given 372, the program prints 273.


#include <iostream>

using namespace std;

int main() {
    
    int num, reversed_num=0, t=1000;
    cout << "Enter num: ";
    cin >> num;
    cout << "Num: " << num << endl;
    // reversed_num=reversed_num+num%10*(t=t/10)+(0*(num=num/10));
    // reversed_num=reversed_num+num%10*(t=t/10)+(0*(num=num/10));
    // reversed_num=reversed_num+num%10*(t=t/10)+(0*(num=num/10));

    // reversed_num+=t+num%10*(t/=10)+1*(num/=10); // getting evaluated from left to right

    // cout << num << endl << reversed_num << endl << t << endl;

    // not recommended method
    reversed_num+=num%10*(t/=10)+0*(num/=10);
    reversed_num+=num%10*(t/=10)+0*(num/=10);
    reversed_num+=num%10*(t/=10)+0*(num/=10);

    cout << "Reversed Num: " << reversed_num << endl;

    return 0;        
}