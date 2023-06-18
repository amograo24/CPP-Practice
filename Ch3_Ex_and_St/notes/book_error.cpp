#include <iostream>

using namespace std;

int main() {
    int x=1237;

    cout << "x in decimal: " << x << endl;
    cout << "x in octal: " << oct << x << endl;
    cout << "x in hexadecimal: " << hex << x << endl;

    cout << showbase;
    // cout << "x in decimal: " << x << endl; // this is the line in the book which will print it in hexadecimal
    cout << "x in decimal: " << dec << x << endl;
    cout << "x in octal: " << oct << x << endl;
    cout << "x in hexadecimal: " << hex << x << endl;
    return 0;
}