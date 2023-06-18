#include <iostream>
#include <limits>
#include <iomanip>

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

    /* checking the min and max values of float */
    cout << "\nMax value of float: " << numeric_limits<float>::max() << endl;
    cout << "Min value of float: " << numeric_limits<float>::min() << endl;
    // both of the above give positive values

    /* checking if manipulators work for unauthorized data types */
    bool b1=true;
    bool b2=0;
    int i1=44;
    int i2=-12;
    int i3=0;
    int i4=89;
    int oi1=077; //077 is octal for 63
    double d1=3.14;
    double d2=-128.99;
    double d3=9;
    double d4=-76;

    cout << "boolalpha << 88: " << boolalpha << 88 << endl;
    cout << "1: " << 1 << endl;
    cout << "boolalpha << 1: " << boolalpha << 1 << endl;
    cout << "true: " << true << endl;
    cout << "b1: " << b1 << endl;
    cout << "sx=3: " << boolalpha << sx << endl;
    cout << "b2: " << b2 << endl;
    cout << "showpoint << sx: " << showpoint << sx << endl;
    cout << showpos << showpoint;
    cout << "showpos << showpoint" << endl;
    cout << "i1: " << i1 << endl;
    cout << "i2: " << i2 << endl;
    cout << "d1: " << d1 << endl;
    cout << "d2: " << d2 << endl;
    cout << "d3: " << d3 << endl;
    cout << "d4: " << d4 << endl;
    cout << "i3: " << i3 << endl;
    cout << "i4: " << i4 << endl;
    cout << "showbase << oct" << showbase << oct << endl;
    cout << "i1: " << i1 << endl;
    cout << "i2: " << i2 << endl;
    cout << "i3: " << i3 << endl;
    cout << "i4: " << i4 << endl;
    cout << "oi1: " << oi1 << endl;
    cout << "showbase << hex" << showbase << hex << endl;
    cout << "i1: " << i1 << endl;
    cout << "i2: " << i2 << endl;
    cout << "i3: " << i3 << endl;
    cout << "i4: " << i4 << endl;
    cout << "oi1: " << oi1 << endl;
    cout << noshowbase << noshowpos << dec << endl;
    cout << "noshowbase << noshowpos << dec" << endl;
    cout << "i1: " << i1 << endl;
    cout << "hex << showbase" << endl << hex << showbase;
    cout << "i1: " << i1 << endl;
    cout << "i2: " << i2 << endl;
    cout << "i3: " << i3 << endl;
    cout << "i4: " << i4 << endl;

    cout << noshowbase << noshowpos << dec << endl;
    // cout << setw(10) << left << 7 << setfill('x') << "." << endl;
    cout << setw(10) << left << 7 << setfill('x') << "." << endl;
    cout << showpos << -7 << endl << noshowpos;

    cout << setw(10) << setfill('x') << right << 7 << endl;
    cout << setw(10) << 7 << endl;
    cout << right << setw(10) << setfill('x') << 7 << endl;
    cout << setfill('x') << right << setw(10) << 7 << endl;
    cout << 9 <<"lol\n" << endl;

    cout << setw(15) << setfill('-') << "PRODUCT" << setw(15) << setfill('-') << "AMOUNT" << endl;
    cout << setw(15) << setfill('-') << "Brush"  << setw(15) << setfill('-') << 10 << endl;
    cout << setw(15) << setfill('-') << "Paste"  << setw(15) << setfill('-') << 8 << endl << endl;

    cout << setw(15) << left << setfill('-') << "PRODUCT" << setw(15) << left << setfill('-') << "AMOUNT" << endl;
    cout << setw(15) << left << setfill('-') << "Brush"  << setw(15) << left << setfill('-') << 10 << endl;
    cout << setw(15) << left << setfill('-') << "Paste"  << setw(15) << left << setfill('-') << 8 << endl << endl;

    cout << setw(15) << right << setfill('-') << "PRODUCT" << setw(15) << right << setfill('-') << "AMOUNT" << endl;
    cout << setw(15) << right << setfill('-') << "Brush"  << setw(15) << right << setfill('-') << 10 << endl;
    cout << setw(15) << right << setfill('-') << "Paste"  << setw(15) << right << setfill('-') << 8 << endl << endl;

    /* checking some setw and setprecision stuff */
    // seems like boolalpha and setw just don't work together in my compiler, but it works online.
    cout << setw(10) <<  setfill('-') << "\nHello" << endl << endl;
    cout << setw(10) <<  right << setfill('-') << "Hello" << endl;
    cout << setw(10) <<  left << setfill('-') << "Hello" << endl;
    cout << setw(6) <<  setfill('-') << "Hello" << endl;
    cout << setw(5) <<  setfill('-') << "Hello" << endl;
    cout << setw(4) <<  setfill('-') << "Hello" << endl;
    cout << setw(3) <<  setfill('-') << "Hello" << endl;
    cout << setw(3) << 4898908 << endl; // the whole thingie is printed
    cout << setfill('-') << setw(10);
    cout << 10 << endl; // setw is still looking for a value here
    cout << 10 << '.' << endl;
    cout << setprecision(2) << 840493.04393094094 << endl;
    cout << setw(2) << setprecision(2) << 840493.04393094094 << endl;
    cout << setprecision(4) << 12.3565646 << endl;
    cout << boolalpha << true << endl;
    cout << setw(10) << setfill('x') << true << endl;
    cout << setw(10) << b1 << endl; // setfill/setw is not working because of my compiler ig, works online
    cout << setw(10) << 10 << endl;
    cout << "string true upcoming:\n";
    cout << setw(10) << right << "true" << endl << left;
    cout << "using bool variable but without the bool alpha:\n";
    cout << setw(10) << noboolalpha << b1 << endl; // setw now works when bool alpha is there
    cout << endl;
    cout << boolalpha << b1 << endl;
    cout << "kk" << setw(10) << b1 << endl;
    cout << setw('!') << 100 << endl; // '!' is converted to 33, so 33-3=30 dashes printed
    cout << setw(true*4) << 100 << endl; //1 dash printed
    cout << setw(10.380983080380) << 100 << endl; // 7 dash printed
    // cout << setfill(65) << setw(10) << 100 << endl; // won't work!
    // cout << setfill(33) << setw(10) << 100 << endl; // won't work!
    // cout << setfill("a") << setw(10) << 100 << endl; // won't work! "a" is a string, not a char
    // cout << setfill(8.99) << setw(10) << 100 << endl; // won't work!
    cout << setfill('a') << setw(10) << 100 << endl; // works!
    cout << setfill('x') << setw(-10) << 100 << endl;
    cout << setfill('x') << setw(6.8) << 100 << endl; // 3 dashes printed
    cout << (int) '!' << endl;
    cout << setprecision('!') << 100.123456789 << endl; // getting 34 digits in total
    cout << setprecision(33) << 100.123456789 << endl; // same thing as above
    cout << setprecision('a') << 100.123456789 << endl; // getting 98 digits in total
    cout << setprecision(8.990) << 100.123456789 << endl;
    cout << setprecision(8) << 100.123456789 << endl;
    cout << setprecision(sx) << 100.123456789 << endl;
    cout << setprecision(sx*3-1) << 100.123456789 << endl;
    cout << setprecision(ss*3-1) << 100.123456789 << endl; // ss is a stringstream object
    cout << setprecision(e) << 100.123456789 << endl; //e='a'
    // cout << setw(10) << setfill(sx) << 100.123456789 << endl; //won't workk


    /* max range of char? and does it wrap? */
    cout << endl << "sizeof(char): " << sizeof(char) << endl;
    cout << numeric_limits<char>::max() << endl;
    cout << numeric_limits<char>::min() << endl;
    const char tc1=122;
    const char tc2=-6;
    const char tc3=289; // wraps around // 128->-128, 256->0, 289->33=>'!'
    cout << tc1 << endl;
    cout << tc2 << endl;
    cout << tc3 << endl;

    /* checking fixed vs scientific, setprecision */
    double dd1=100.123456789;
    cout << endl;
    cout << defaultfloat; // make it default
    cout << dd1 << endl;
    cout << fixed << dd1 << endl;
    cout << scientific << dd1 << endl;
    // double dd2=100.123456789;

    /* checking garbage values */
    int g1,g2=3;
    cout << "\ng1: " << g1 << endl;
    cout << "g2: " << g2 << "\ng1*g2: " << g1*g2 << endl << "g1+g2: " << g1+g2 << endl;

    

    return 0;
}