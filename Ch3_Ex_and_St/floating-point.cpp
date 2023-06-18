#include <iostream>
#include <iomanip>
using namespace std;

int main() {
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
    cout << "showpoint: \n";
    cout << showpoint <<d1 << endl << d2 << endl << d3 << endl << d4 << endl << d5 << endl << d6 << endl << noshowpoint;
    cout << "noshowpoint, fixed \n";
    cout << fixed << d1 << endl << d2 << endl << d3 << endl << d4 << endl << d5 << endl << d6 << endl << d9 << endl;
    cout << "scientific: \n";
    cout << scientific << d1 << endl << d2 << endl << d3 << endl << d4 << endl << d5 << endl << d6 << endl << d9 << endl;
    cout << setprecision(8);
    cout << "setprecision(8): \n";
    cout << scientific << d1 << endl << d2 << endl << d3 << endl << d4 << endl << d5 << endl << d6 << endl;
    cout << setprecision(2);
    cout << "setprecision(2): \n";
    cout << scientific << d1 << endl << d2 << endl << d3 << endl << d4 << endl << d5 << endl << d6 << endl;
    cout << setprecision(0);
    cout << "setprecision(0): \n";
    cout << scientific << d1 << endl << d2 << endl << d3 << endl << d4 << endl << d5 << endl << d6 << endl;
    cout << showpoint;
    cout << "showpoint: \n";
    cout << scientific << d1 << endl << d2 << endl << d3 << endl << d4 << endl << d5 << endl << d6 << endl << noshowpoint;
    cout << setprecision(-1);
    cout << "noshowpoint, setprecision(-1): \n";
    cout << scientific << d1 << endl << d2 << endl << d3 << endl << d4 << endl << d5 << endl << d6 << endl;    
    cout << setprecision(-8);
    cout << "setprecision(-8): \n";
    cout << scientific << d1 << endl << d2 << endl << d3 << endl << d4 << endl << d5 << endl << d6 << endl;   
    // cout << setw(20) << d1 << endl;
    cout << resetiosflags(ios::scientific);
    cout << d1 << endl << d2 << endl << d3 << endl << d4 << endl << d5 << endl << d6 << endl;  
    return 0;
}