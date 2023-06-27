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
    for(int i2=1,i3=4;i3;i3--,i2--) { 
        cout << i2 << " " << i3 << endl;
    }
    cout << "\n\n";
    // for((int i2=1,i3=4, float f1=33.4);i3;i3--,i2--) {  // not valid as it whie initializing, it expects only ints. So it's like trying int float m;
    int i2, i3; float f1;   
    for(i2=1,i3=4,f1=33.4;i3;i3--,i2--,f1+=2.3) {
        cout << i2 << " " << i3 << " " << f1 << endl;
    }
    cout << i2 << " " << i3 << " " << f1 << endl;
    cout << "\n\n";
    cout << "\n testing scope now\n";
    {
        int sci2, sci3; float scf1;   
        for(sci2=1,sci3=4,scf1=33.4;sci3;sci3--,sci2--,scf1+=2.3) {
            cout << sci2 << " " << sci3 << " " << scf1 << endl;
        } 
        cout << sci2 << " " << sci3 << " " << scf1 << endl;
    }
    // cout << sci2 << " " << sci3 << " " << scf1 << endl; // error, as the variables are not defined in this scope

    // for(;1<2;cout << "Hello\n"); // no error, but results in an infinite loop

    for(int z=0;!z;z++){
        // int z=5; // invalid as it is redefining z which is already declared for this for loop scope
    }

    // {int m;}
    // m=6; // error, as m is not defined in this scope

    for(int xx=0;xx<5;xx++) {
        {int m;}
        // cout << m; // error, as m is not defined in this scope
        cout << xx << " ";
    }

    int kk;
    {kk=5;} // valid, as kk is defined in this scope
    int mm=5;
    {int mm=8; cout << endl << mm << endl;} // valid, as mm is defined in this scope
    cout << mm << endl;

    // while(cout << "\nHello\n"); // no error, but results in an infinite loop
    // cout << "Checking if the loop has been exited.\n";

    /* defining a variable in do, and checking if it will work in while */
    // do {
    //     int di1=5;
    //     di1--;
    // } while(di1);

    /* condition in for loop */
    // for(int i=0;i<5;if(kk) i++) {
    // }
    int x;
    for(x=0;x<10;x++){
        while(x<100){
            cout << x << " ";
            x++;
        }
        cout << endl << x << endl;
    }
    cout << endl << x << endl;
    // 0.......99
    // 100
    // 101
    return 0;
}