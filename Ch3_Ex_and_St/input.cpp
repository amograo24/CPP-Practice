#include <iostream>
#include <string>
using namespace std;

int main() {
    bool input1, input2, input3;

    // Prompt the user to enter three boolean values
    // cout << "Enter boolean value 1 (0 for false, 1 for true): ";
    // cin >> input1;

    // cout << "Enter boolean value 2 (0 for false, 1 for true): ";
    // cin >> input2;

    // cout << "Enter boolean value 3 (0 for false, 1 for true): ";
    // cin >> input3;

    // // Display the entered boolean values
    // cout << "Boolean values entered:\n";
    // cout << "Input 1: " << input1 << endl;
    // cout << "Input 2: " << input2 << endl;
    // cout << "Input 3: " << input3 << endl;

    int int1, int2, int3, int4, int5;
    // char char1; string str1;
    // cout << "Enter int1, str1, int3: "; cin >> int1 >> str1 >> int3;
    // cout << "int1: " << int1 << endl;
    // cout << "str1: " << str1 << endl;
    // // cout << "int2: " << int2 << endl;
    // cout << "int3: " << int3 << endl;
    // cout << "Enter int2: ";
    // if(cin >> int2) { // observe how an input statement is in an if condition.
    //     cout << "success";
    // } else {
    //     cout << "Invalid input. Please enter an integer." << endl;
    //     cin.clear();
    //     cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    //     cout << "Enter int2: ";
    //     cin >> int2;
    // }
    // cout << "int2: " << int2 << endl;
    // cout << "Enter char1: "; cin >> char1;
    // cout << "char1: " << char1 << endl;
    cout << "hex int4: ";
    // cin >> int4; // also if i enter hex, then it's an error. I need to put >> hex
    cin >> hex >> int4; // 14 or 0x14 are accepted
    cout << "int4: " << int4 << endl;  // 20 is returned

    cout << "hex int5: ";
    cin >> int5; 
    cout << "int5: " << int5 << endl;

    // try int >> string >> char


    return 0;
}
