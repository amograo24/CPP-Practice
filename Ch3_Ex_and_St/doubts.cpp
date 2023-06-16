#include <iostream>
#include <limits>

using namespace std;

int main () {

    /* Checking the working of the modulo operator */
    const int a=10;
    const int b=3;
    const double c=3.22;
    const double d=5;
    const char e='a';
    const char f=12; // why does this give me 'f'? -> because 12 is the ascii value of form feed
    const char g=36;
    // implicit conversion occurs in the below two cases from double to char
    const char h=34.8892; // why does this give me '"'? -> because 34 is the ascii value of double quotes
    const char i=69.92756; // why does this give me 'E'? -> because 69 is the ascii value of E

    cout << "a: " << a << ", b: " << b << endl;
    cout << a%b << endl << -a%b << endl << a%-b << endl << -a%-b << endl;
    // cout << c%d << endl; // will give error as it is not defined for floating point values
    cout << endl << "e: " << e << ", f: " << f << endl;
    cout << e%f << endl << -e%f << endl << e%-f << endl << -e%-f << endl;
    cout << endl << "e: " << e << ", g: " << g << endl;
    cout << e%g << endl << -e%g << endl << e%-g << endl << -e%-g << endl;
    cout << "h: " << h << ", i: " << i << endl;

    /* checking assignment expressions as a part of other statements */
    int x=5,y=10,z=5;
    cout << endl;
    cout << "x: " << x << endl;
    cout << "x+=5: " << (x+=5) << endl;
    cout << "x: " << x << endl;
    // cout << "x=23: " << x=23 << endl; // won't work as there is no paranthesis, so to make the assignment statement happen first, we need to use paranthesis
    cout << "x=23: " << (x=23) << endl;
    cout << "x: " << x << endl;
    cout << "y: " << y << ",z: " << z << endl;
    // y=(y+z)+(y=2)
    cout << "y=(y+z)+(y=2): " << (y=(y+z)+(y=2)) << endl; // y=15+2? -> y=17
    // y=(y=2)+(y+z)
    y=10;
    cout << "y=(y=2)+(y+z): " << (y=(y=2)+(y+z)) << endl; // y=2+(2+5)? -> y=9
    y=10;
    // y=(y+z)+(y=2)+y-4
    cout << "y=(y+z)+(y=2)+y-4: " << (y=(y+z)+(y=2)+y-4) << endl; // y=15+2+2-4? -> y=15
    y=10;
    // y=(y=2)+(y+z)+y-4
    cout << "y=(y=2)+(y+z)+y-4: " << (y=(y=2)+(y+z)+y-4) << endl; // y=2+(2+5)+2-4? -> y=7
    y=10;

    /* checking the overflow when we short*short can no longer be accomodated in a short */

    // get max value of short
    cout << endl << "Max value of short: " << numeric_limits<short>::max() << endl;
    cout << "Min value of short: " << numeric_limits<short>::min() << endl << endl;

    const short sx=3;
    const short sy=12000;
    const short sresult=sx*sy;
    cout << "sx: " << sx << ", sy: " << sy << "sx*sy: "  << sx*sy << ", type(sx*sy)" << typeid(sx*sy).name() << endl;
    cout << "sresult: " << sresult << ", type(sresult): " << typeid(sresult).name() << endl; //overflow
    cout << "8: " << 8 << ", (double)8: " << showpoint << (double) 8 << endl; 
    cout << "99: " << 99 << ", (char)99: " << showpoint << (char) 99 << endl;

    // 36000-32767=3233
    // -32768+(3233-1)=-29536

    /* checking unsigned for other types */
    // The following are invalid:
    // short char sc = 96;
    // short bool ub = true;
    // long bool lb = true;
    // signed bool sb = true;
    // long char lc = 97;
    // short float sf = 3.14;
    // long float lf = 3.14;
    // signed float sif = 3.14;
    // unsigned float uf = 3.14;
    // signed double sd = 3.14;
    // unsigned double ud = 3.14;
    // long short ls = 3;
    // short short ss;

    // The following are valid:
    signed short ss;
    unsigned short us;

    signed int si;
    unsigned int ui;

    signed long sl;
    unsigned long ul;

    signed char sc;
    unsigned char uc;

    long double ld;

    long long ll;

    // if the size of all the below is the same, then does it really make a difference? Or is it system dependent?
    cout << endl << "sizeof(long): " << sizeof(long) << endl;
    cout << "sizeof(long long): " << sizeof(ll) << endl;
    cout << "sizeof(double): " << sizeof(double) << endl;
    cout << "sizeof(long double): " << sizeof(ld) << endl;

    /* Checking if a value is greater than max, then can it be +ve (in signed)*/
    cout << "\n65540 in a short: " << static_cast<short>(65540) << endl; // 4
    // 32768 is 1 more than max, so it will give -32768. Now, 32768*2=65536 which will give 0. So 64440 will give 4.
    return 0;
}