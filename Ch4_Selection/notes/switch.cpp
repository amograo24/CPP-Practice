#include <iostream>
#include <string>

using namespace std;

int main() {

    int x;
    float f;
    char c;
    x=12;
    cout << endl << "s1\n";
    switch (x) {
        cout << "x: " << x << endl;
        case 11:
            cout << "x is 11" << endl;
            break;
        case 12:;
        case 13:
            cout << "X: " << x << endl;
        default:
            cout << "x is not 11" << endl;
            break;
    }
    cout << "\n\ns2\n";
    switch(3) {

        case 2:
            cout << "2" << endl;
            break;
        case 3:
            cout << "3" << endl;
            break;

    }

    cout << "\n\ns3\n";

    switch (int f = 6; f) {
        cout << "f: " << f << endl;
        case 5:
            cout << "f is 5" << endl;
            break;
        case 6:
            cout << "f is 6" << endl;
            cout << "typeid(f).name()" << typeid(f).name() << endl;
            // break;
        case 4:
            cout << "f is 4" << endl;
            break;
        case 7:
            cout << "f is 7" << endl;
            break;
        default:
            cout << "f is not 4, 5, or 6" << endl;
            break;
    }

    cout << "typeid(f).name()" << typeid(f).name() << endl;
    // switch(f) { // not permitted legallly

    // }
    switch(c) {
        
    }

    // switch(string s = "hello"; s) { // error in line s

    // }

    switch(int m=5) {
        case 10:
            cout << "m is 10" << endl;
            break;
        case 5:
            cout << "m is 5" << endl;
            break;
    }

    switch(int n='a') {
        // can we also have a non-case statement?
        cout << "We tell 'a'" << endl;
        case 'a':
            cout << "n is a" << endl;
            // break;
        // case 97: //not valid
        cout << "n is 97" << endl;
        break;
        case 'b':
            cout << "n is b" << endl;
            break;
        // case 8.9999: //not valid
        case static_cast<int>(8.999): // valid
            cout << "n is 8" << endl;
            break;
        
        case(8||0): // valid
            cout << "n is 8" << endl;
            break;
        // case (1) : // invalid due to case (8||0)
        //     cout << "n is 1" << endl;
        //     break;

        // case true: // invalid due to case (8||0)
    }

    // switch("a") { // not valid

    // } 

    // ('A'+32);

    int i1,i2,i3;

    switch(i1) {
        case 1: i2++; i3--; case 2: i2++; break; case 3: i3++; break;
    }

    int j=5;
    switch(j) {
        case 1: {
            cout << "It's 1\n"; break;
        }

        case 2: {
            cout << "It's 2\n";
            j=3; cout << "j is now 3\n";
            break;
        }

        case 3: {
            cout << "Checking if the break in case 2 works\n";
            cout << "It's 3\n"; break;
        };

        case 11: {
            cout << "It's 11\n"; break;
        }

        case 6: {
            cout << "It's 6\n"; break;
        }

        case 4: {
            cout << "It's 4\n"; break;
        }

        case 5: {
            cout << "It's 5\n"; break;
        }
    }

    // switch(j) case 2: // valid
    // switch(j); // valid
    // switch(j) {} // valid
    // switch(j) case 4: break; case 2: break; // invalid as case 2 is no longer a part of switch(j)

    switch(int k=5) case 5: {k++; cout << "k: " << k << endl; break;}

    // cout << "K: " << k << endl; // this k is not defined
    cout << "\nj: " << j << endl;
    switch(j) {
        case 1: {
            cout << "It's 1\n";
        }
        default: {
            cout << "It's default\n";
        }
        case 5: {
            cout << "It's 5\n";
        }
    }
    cout << "**********\n";
    switch(j) {
        default: {
            cout << "It's default\n";
        }
        case 1: {
            cout << "It's 1\n";
        }
        case 5: {
            cout << "It's 5\n";
        }
    } 
    cout << "**********\n";
    switch(j) {
        case 5: {
            cout << "It's 5\n";
        }    
        default: {
            cout << "It's default\n";
        }
        case 1: {
            cout << "It's 1\n";
        }

    } 
    cout << "**********\n";
    switch(5) {
        case 1:
            cout << "1\n";
            break;
        case 2:
        default:
            cout << "2, default\n";
            break;
        case 3:
            cout << "3\n";
            break;
        case 5:
            cout << "555\n";
            break;
        case 4:
            cout << "4\n";
            break;
    }

    int purple=2;
    cout << "\n\n******\n\n";
    cout << "purple: " << purple << endl; // 2
    if(purple!=3) purple=3; // if purple is not 3, make it 3
    cout << "purple: " << purple << endl; // 3
    purple==2 || (purple=2); // if purple is not 2, make it 2
    cout << "purple: " << purple << endl; // 2
    purple==2 || (purple=3); // if purple is not 2, make it 3 (it won't change to 3)
    cout << "purple: " << purple << endl; // 2
    purple==3 && (purple=4); // if purple is 3, make it 4 (it won't change to 4)
    cout << "purple: " << purple << endl; // 2
    purple==2 && (purple=4); // if purple is 2, make it 4
    cout << "purple: " << purple << endl; // 4

    return 0;
}