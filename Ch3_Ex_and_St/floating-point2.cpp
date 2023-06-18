// Online C++ compiler to run C++ program online
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Write C++ code here
    double d1=155.46;
    double d2=33.484934093093;
    double d3=6758.89938833;
    double d4=67;
    double d5=7.12e-1;
    double d6=8.28e-5;
    double d7=893892.47;
    double d8=8938929.47;
    double d9=2000000.1;
    // exponential definition
    // and one with no fractional part
    cout << "normal: \n";
    cout << d1 << endl << d2 << endl << d3 << endl << d4 << endl << d5 << endl << d6 << endl;
    cout << d7 << endl << d8 << endl << d9 << endl;
    cout << "YOOOO\n";
    cout << setprecision(4);
    cout << d1 << endl << d2 << endl << d3 << endl << d4 << endl << d5 << endl << d6 << endl;
    cout << d7 << endl << d8 << endl << d9 << endl;
    cout << fixed;
    cout << "YPPPP\n";
    cout << d1 << endl << d2 << endl << d3 << endl << d4 << endl << d5 << endl << d6 << endl;
    cout << d7 << endl << d8 << endl << d9 << endl;
    cout << resetiosflags(ios::fixed);
    cout << "YTTTT\n";
    cout << d1 << endl << d2 << endl << d3 << endl << d4 << endl << d5 << endl << d6 << endl;
    cout << d7 << endl << d8 << endl << d9 << endl; 
    cout << setprecision(1);
    cout << "\nYUUUU\n";
    cout << d1 << endl << d2 << endl << d3 << endl << d4 << endl << d5 << endl << d6 << endl;
    cout << d7 << endl << d8 << endl << d9 << endl;    
    cout << setprecision(0);
    cout << "\nYVVVV\n";
    cout << d1 << endl << d2 << endl << d3 << endl << d4 << endl << d5 << endl << d6 << endl;
    cout << d7 << endl << d8 << endl << d9 << endl;

    return 0;
}