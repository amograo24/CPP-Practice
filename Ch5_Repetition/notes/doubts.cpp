#include <iostream>

using namespace std;

int main() {

    /* trying prefix and postfix on other things */
    // 5++; // invalid, as postfix/prefix works on a modifyable lvalue
    int p1 = 5, i1=6, i2=3, i3=15;
    double p2 = 5.5;
    char p3 = 'a';
    bool p4, p5=40;

    cout << "p4: "  << boolalpha << p4 << endl;
    // 5++;

    p1++;
    p2++;
    p3++;
    cout << p1 << endl << p2 << endl << p3 << endl;
    // p4++; // invalid, incrementing a bool value is not allowed
    p4+=1;
    cout << "p4: "  << boolalpha << p4 << endl;
    p4+=1;
    cout << "p4: "  << boolalpha << p4 << endl;
    p4-=3;
    cout << "p4: "  << boolalpha << p4 << endl;
    p4+=1;
    cout << "p4: "  << boolalpha << p4 << endl;
    p4-=1;
    cout << "p4: "  << boolalpha << p4 << endl;

    // i1++10;
    i1+++10;
    // i1++++;
    // (i1++)++;
    // i1++++10;
    i1++-+10;
    i1+++-10;
    // i1++--10;
    i1++-(-10);
    // ++i1++10;
    ++i1+(+10);
    // +++i1;
    +(++i1);
    -++i1;
    // i1+++;
    // i1++++p1;
    // i1+++++p1;
    i1+++(++p1);
    // (i1++)+++p1;

    cout << "\n*****\n";

    /* declaring/initializing variable in while loop test condition */

    // while(int w1); // compile time error as w1 has to be initialized

    // while(int w1=5) { // will run forever
    //     cout << "w1: " << w1 << endl;
    //     w1--;
    // }

    // cout << "w1: " << w1 << endl; // invalid, w1 is not in scope

    // while(int w1=0) { // will never run
    //     cout << "w1: " << w1 << endl;
    //     w1--;
    // }

    int w1;
    // while(w1=5) { // will also run forever since w1 in every iteration is being assigned to 5
    //     cout << "w1: " << w1 << endl;
    //     w1--;
    // }

    w1=5;
    // while(w1); // will run forever (it runs the null statement again and again)
    // while(w1){}; // will run forever (it runs the empty compound again and again)

    while(w1--); // will run 5 times ig
    cout << "\nChecking if the loop is quit.\n";
    cout << "w1: " << w1 << endl; // we get -1. As w1 will be zero, and this will be the value that 
    // goes with the condition check, but then the value is immediatly decremented, so we get -1

    w1=5;
    while(--w1); // will run 4 times ig
    cout << "\nChecking if the loop is quit.\n";
    cout << "w1: " << w1 << endl; // we get 0 as --1 will make it zero

    cout << "\n*****\n";
    w1=5;
    while(w1--) cout << "w1: " << w1 << endl; // will run 5 times ig
    // so it appears to be taking the updated value of w1 inside the loop

    cout << "\n*****\n";
    w1=5;
    while(--w1) cout << "w1: " << w1 << endl; // will run 4 times ig
    // w2+++5 vs 5+w2++

    /* checking some stuff about do-while */

    // do { //illegal, as the do expects a while

    // } 

    // while(true) do { // while-do is illegal

    // }

    // do {} while(true){} // valid, but will run infinitely
    // cout << "\nChecking if the loop is quit.\n";

    // do;while(true);
    
    // do while cout while
    int di1=0, di2=3;
    do di1++; while(di1<10); //valid

    do while(di1) di1--; while(di2--); // valid

    // the following is invalid
    // do {

    // } while(di2--) {

    // }
    // basically the same as:
    // do {} while(di2--){} // invalid
    // do {} while(di2--)di1+=1; // invalid
    do {} while(di2--); // valid

    cout << "\n*****\n";
    w1=5;
    do;while(w1--);
    cout << "w1: " << w1 << endl; // we get -1. As w1 will be zero, and it won't be accepted, but 0-- will happen making it -1

    cout << "\n*****\n";
    w1=5;
    do cout << "w1: " << w1 << endl;while(w1--); // 5 4 3 2 1 0 (will run 6 times)

    /* initializing, checking if we can use signs, etc */

    // int inz1=5,000; // we cannot put commas as it thinks that we are trying to declare a new identifier
    int inz2,inz3,inz4;
    inz2=5,000;
    cout << "inz2: " << inz2 << endl; // we get 5
    inz3,inz4=6,22;
    cout << "inz3: " << inz3 << endl; //
    cout << "inz4: " << inz4 << endl; //
    double dinz1, dinz2;
    dinz1=3,000.48938948; // 3
    cout << "dinz1: " << dinz1 << endl; // we get 5
    inz3=016; // stored as 14
    inz4=00000016; // also stored as 14
    dinz1=016.44; // stored as 16.44
    dinz2=016; // stored as 14
    cout << "dinz1: " << dinz1 << endl;
    cout << "dinz2: " << dinz2 << endl;
    inz3=016.44; // stored as 16
    cout << "inz3: " << inz3 << endl;

    inz2=3;
    cout << "inz2: " << inz2+++3 << endl; // we get 6
    inz2=3;
    cout << "inz2: " << (inz2++)+3 << endl; // we get 6
    inz2=3;
    cout << "inz2: " << (++inz2)+3 << endl; // we get 7
    inz2=3;
    cout << "inz2: " << ++inz2+3 << endl; // we get 7





    return 0;
    // return 0.113; // valid
    // return 99.8888; // valid
    // return 'a'-97; // valid
}