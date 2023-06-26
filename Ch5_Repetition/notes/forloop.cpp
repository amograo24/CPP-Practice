#include <iostream>

using namespace std;

int main() {

    /* checking empty condition of loop */
    // for(;;); // no error, but results in an infinite loop
    // cout << "Checking if the loop has been exited.\n";

    /* checking empty initialization */
    int i1=0;
    for(int i1=0;i1<5;i1++) {
        cout << i1 << " ";
    }
    cout << "\n\n";
    for(;;) {
        if(i1==5) break;
        cout << i1 << " ";
        i1++;
    }
    cout << "\n\n";
    cout << "i1: " << i1 << endl;
    // for(int i2=1;i1;i2*2) { // will just multiply i2 by 2, but won't update the value stored in i2
    for(int i2=1;i1;i2*=2) {
        cout << i2 << " " << i1 << endl;
        i1--;
    }
    cout << "\n\n";
    cout << "i1: " << (i1=5) << endl;
    for(int i2=1;i1;cout << endl) {
        cout << i2 << " " << i1;
        i1--;
        i2*=2;
    }
    cout << "\n\n";
    cout << "i1: " << (i1=5) << endl;
    // check from here, if i can define multiple variables of same type? multiple variables of different types?
    for(int i2=1,i3=4;i1;cout << endl) { 
        cout << i2 << " " << i1;
        i1--;
        i2*=2;
    }

    // for(;1<2;cout << "Hello\n"); // no error, but results in an infinite loop

    // while(cout << "\nHello\n"); // no error, but results in an infinite loop
    // cout << "Checking if the loop has been exited.\n";
    return 0;
}