// Write a program that individually extracts the rightmost three digits of an input data of type int.

#include <iostream>

using namespace std;

int main() {
    
    int num,u,t,h;

    cout << "Enter num: ";
    cin >> num;
    cout << "Num: " << num << endl;
    u=num%10;
    num=num/10;
    t=num%10;
    num/=10;
    h=num%10;
    cout << "H: " << h << endl;
    cout << "T: " << t << endl;
    cout << "U: " << u << endl;





    return 0;        
}