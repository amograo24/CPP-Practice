#include <iostream>

using namespace std;

int main() {

    unsigned int inp;
    cout << "Enter a two-digit number: ";
    cin >> inp;

    if (inp>99 || inp<0)
    {
        /* code */
        cout << "Invalid Input. Terminating." << endl;
    }
    else {
        cout << "The reversal is: ";
        cout << inp%10 << inp/10 << endl;
    }
    
    return 0;
}