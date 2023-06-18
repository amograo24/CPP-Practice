#include <iostream>
#include <string>

using namespace std;

int main() {

    /* Using the '<<' or '>>' operators to check if it can repalce the '=' operator */
    int x,y;
    (5+5) >> x;
    y << (5+5);
    y << x;
    cout << "X: " << x << endl;
    cout << "Y: " << y << endl;
    /* The above won't work as '<<' and '>>' are overloaded operators specific for their purpose, and hence
    cannot be used like this to replace the assignment ('=') operator */

    /* Trying to use a keyword as a variable name */
    // int do = 4;
    // cout << do << endl;
    // float for = 1.2;
    /* The above will give a compilation error */

    /* Escape Sequence */
    cout << "Testing Invalid Escape Sequence: \c" << endl;
    cout << "Testing Valid Escape\tSequence." << endl;
    cout << "Testing Valid & Invalid Escape\nSequence: \c" << endl;

    /* sizeof operator */
    string name="amog";
    cout << "Size of Int: " << sizeof(int) << endl;
    cout << "Size of Long Int: " << sizeof(long int) << endl;
    cout << "Size of Short Int: " << sizeof(short int) << endl;
    cout << "Size of 35: " << sizeof(35) << endl;
    cout << "Size of 35.0: " << sizeof(35.0) << endl;
    cout << "Size of 35.0f: " << sizeof(35.0f) << endl;
    cout << "Size of 8L: " << sizeof(8L) << endl;
    cout << "Size of bool: " << sizeof(bool) << endl;
    cout << "Size of \'a\': " << sizeof('a') << endl;
    cout << "Size of \"a\": " << sizeof("a") << endl;
    cout << "Size of \"amog\": " << sizeof("amog") << endl;
    cout << "\"a\"[0]: " << "a"[0] << endl;
    cout << "\"a\"[1]: " << "a"[1] << endl;
    cout << "Null Character: " << '\0' << endl;
    cout << "Size of Class string " << sizeof(string) << endl;
    cout << "Size of string name: " << sizeof(name) << endl;

    // cout << "Size of void: " << sizeof(void) << endl; // This will give an error as void is an incomplete type

    void *ptr; // will work (void pointer)
    // void x; // will not work as void is an incomplete type

    /* Trying long value in short */
    short int a = 123456789; // more than max value of short int so there will be implicit conversion
    short int b = 12;
    short int c = 832L;
    short int d = 32767; // max value of short int
    short int e = 32780; // more than max value of short int so there will be implicit conversion
    short int f = 8892.0003848949200030984; // 8892 comes
    short int g = 32766.99999999999999999999999999999999999;
    short int h = 32767.99999999999999999999999999999999999;
    short int i = 32768.99999999;
    int j = 38998938.9999999999; // round off, why? -> this is literally being stored as 38998939.0 in double
    int k = 23.67; // why no round of here?
    int l = (int)38998938.9999999999;

    cout << "Value of a: " << a << endl;
    cout << "Value of b: " << b << endl;
    cout << "Value of c: " << c << endl;
    cout << "Value of d: " << d << endl;
    cout << "Value of e: " << e << endl;
    cout << "Value of f: " << f << endl;
    cout << "Value of g: " << g << endl;
    cout << "Value of h: " << h << endl;
    cout << "Value of i: " << i << endl;
    cout << "Value of j: " << j << endl;
    cout << "Value of k: " << k << endl;
    cout << "Value of l: " << l << endl;

    /* Using std::cout instead of just cout even though the namespace is mentioned on the top */
    std::cout << "Done using std::cout\n";
    cout << "Done normally using cout\n";




    

    return 0;
}