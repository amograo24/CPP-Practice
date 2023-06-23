#include <iostream>
#include <string>

using namespace std;

int main() {

    int kkkk;
    cout << "kkkk: " << kkkk << endl;
    kkkk+=10;
    cout << "kkkk: " << kkkk << endl;
    unsigned int ui1;
    float f1;
    string str1,str2="a";
    // cout << str2+44 << endl; // invalid
    cout << "a"+44 << "**" << endl; // valid
    char c,c2;
    cout << "Enter an unsigned integer: ";
    cin >> ui1; // -4294967294 gives 2 ||| try 1.888 and see
    cout << "ui1 = " << ui1 << endl;
    cout << "Enter a float: ";
    cin >> f1;
    cout << "f1 = " << f1 << endl;

    cout << "Float followed by string: ";
    cin >> f1 >> str1;
    cout << "f1 = " << f1 << endl;
    cout << "str1 = " << str1 << endl;
    cout << "Enter a character: ";
    cin >> c; //65 makes c='6' ||||||| enter 655 and see
    cout << "c = " << c << endl;
    cout << "c2, ui1: " << endl;
    cin >> c2 >> ui1;
    cout << "c2 = " << c2 << endl;
    cout << "ui1 = " << ui1 << endl;
    cout << "string followed by float: ";
    cin >> str1 >> f1;
    cout << "str1 = " << str1 << endl;
    cout << "f1 = " << f1 << endl;
    return 0;
}