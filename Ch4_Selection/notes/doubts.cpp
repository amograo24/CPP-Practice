#include <iostream>
#include <string>

using namespace std;

int global_x, global_y, global_z;

int main() {

    /* checking boolean values of certain things */
    // char empty = ''; // quoted character should contain at least one character
    // char empty = ""; // const char * is not the same as char, so won't be allowed

    char m, one='\1', zero='\0';
    int x, y, z;
    bool b;
    string str;

    if (0.000) cout << "0.000 is true" << endl;
    else cout << "0.000 is false" << endl;

    if (0.0001) cout << "0.0001 is true" << endl;
    else cout << "0.0001 is false" << endl;

    if (0.000000000000001) cout << "0.000000000000001 is true" << endl;
    else cout << "0.000000000000001 is false" << endl;    

    if (' ') cout << "\' \' is true" << endl;
    else cout << "\' \' is false" << endl;

    if ('\0') cout << "'\\0' is true" << endl;
    else cout << "'\\0' is false" << endl;

    if ("") cout << "\"\" is true" << endl; // "" is const char[1]
    else cout << "\"\" is false" << endl;

    if("\0") cout << "\"\\0\" is true" << endl;
    else cout << "\"\\0\" is false" << endl;

    if("\0"[0]) cout << "\"\\0\"[0] is true" << endl;
    else cout << "\"\\0\"[0] is false" << endl;

    if("\0"[1]) cout << "\"\\0\"[1] is true" << endl;
    else cout << "\"\\0\"[1] is false" << endl;

    if(""[0]) cout << "\"\"[0] is true" << endl;
    else cout << "\"\"[0] is false" << endl;

    if("a"[0]) cout << "\"a\"[0] is true" << endl;
    else cout << "\"a\"[0] is false" << endl;

    if("a"[1]) cout << "\"a\"[1] is true" << endl;
    else cout << "\"a\"[1] is false" << endl;

    if(m) cout << "m is true" << endl;
    else cout << "m is false" << endl;

    if(x||y||z) cout << "x||y||z is true" << endl;
    else cout << "x||y||z is false" << endl;

    cout << endl;

    if(false); // empty statement
    cout << "The semicolon ends the if statement" << endl;

    cout << "\"\"[0]" << ""[0] << endl; 
    // cout << "\"a\"[0]" << typeid.name("a"[0]) << endl;
    cout << "typeid(\"a\"[0]).name(): " << typeid("a"[0]).name() << endl;
    cout << "typeid(\"a\"[1]).name(): " << typeid("a"[1]).name() << endl;
    cout << "\"a\"[0]" << "a"[0] << endl;
    cout << "\"a\"[1]" << "a"[1] << endl;


    cout << "Char m: " << m << endl;
    cout << "Int x: " << x << endl;
    cout << "Int y: " << y << endl;
    cout << "Int z: " << z << endl;

    cout << endl;

    cout << "Global int x: " << global_x << endl;
    cout << "Global int y: " << global_y << endl;
    cout << "Global int z: " << global_z << endl;

    if (global_x||global_y||global_z) cout << "global_x||global_y||global_z is true" << endl;
    else cout << "global_x||global_y||global_z is false" << endl;

    cout << endl;

    cout << "Bool b: " << b << endl;
    if(b) cout << "b is true" << endl;
    else cout << "b is false" << endl;

    if(y) cout << "y is true" << endl;
    else cout << "y is false" << endl;

    // if(str) cout << "str is true" << endl; // not valid as it's a class and not a boolean expression
    // else cout << "str is false" << endl;

    /* checking if the if statement can be a part of an initialization */
    // x=(if(1) {2;}); // not valid

    /* trying an if statement in ternary */
    // not valid
    // 2>1.8?if (9>4)
    // {
    //     /* code */
    // }
    // :if (/* condition */)
    // {
    //     /* code */
    // }
    // ;

    /* checking if a few things are valid in ternary */
    1?cout << "Hello\n": cout << "yo\n";
    cout << "X: " << x << endl;
    cout << "Z: " << z << endl;
    1?x=4:x=5;
    cout << "X: " << x << endl;
    // 1?({x=10;z=5;"lol";}): x=5; //not valid because operands should be of the same type
    // 1?({x=10;z=5;}): x=5; // valid
    1?({x=10;z=5;1+4;}): x=5;
    cout << "X: " << x << endl;
    cout << "Z: " << z << endl;
    1?({if(1) x+=10; else x=5; z=5;}): x=5;
    cout << "X: " << x << endl;
    x=({if (1) 15; else x=5; z=5;}); //x gets z's value, that's the only reason this whole statement is valid
    cout << "X: " << x << endl;
    x++;
    cout << "X: " << x << endl;
    // x=({if (1) z=15; else x=5;}); // value of type void to x cannot take place
    // cout << "X: " << x << endl;
    // x=({if (1) x=15; else x=5;}); // value of type void to x cannot take place
    // 1?({x=10;z=5;1+4;(cout << "hello");}): cout << "hello"; //invalid
    1?({x=10;z=5;1+4.0;}): x=5; // casting?
    1?({x=10;z=5;'C';}): x=5; // casting?
    1?({x=10;z=5;true;}): x=5; // casting?
    // 1?({x=10;z=5;"C";}): x=5; // invalid;
    // 1?(cout << "Hello"):x=5; // invalid;
    cout << "typeid(1?5:8.0).name(): " << typeid(1?5:8.0).name() << endl; // we get double, as the 5 is casted to double
    cout << endl << endl << "typeid: ";
    cout << typeid(1?(cout << 1 << "hello\n"):(cout << 2 << "hello\n")).name() << endl; // valid
    cout << endl << endl;
    cout << "typeid(1?\'c\':8).name(): " << typeid(1?'c':8).name() << endl; // we get int, as the 'c' is casted to int
    // 1?5:"8"; // invalid
    cout << endl << endl;

    /* trying some boolean expressions */
    cout << "true<0: " << (true<0) << endl;
    cout << "true>0: " << (true>0) << endl;
    cout << "true<3: " << (true<3) << endl;
    cout << "true>3: " << (true>3) << endl;
    cout << "false>-3: " << (false>-3) << endl;
    cout << "false<-3: " << (false<-3) << endl;
    cout << "80<=90<0: " << (80<=90<0) << endl; // comes as false
    cout << "90<0<=80: " << (90<0<=80) << endl; // comes as true, but should be false
    cout << "3||5: " << (3||5) << endl;
    cout << "3&&5: " << (3&&5) << endl;
    cout << "0||5: " << (0||5) << endl;
    cout << "0&&5: " << (0&&5) << endl;
    1||0;
    // 1||hljfhklfhh; // tells that hljfhklfhh is not declared

    /* trying some if conditions stuff */
    if(false) ; else cout << "else\n";
    if(true) cout << "if\n" ; else ;
    if(1);else;

    if (2) if(4);
    if (2) {}
    if (2) {
        if(4);
    }
    if (2) if(1); else cout << "zero\n";
    if (2) if(0); else cout << "zero\n";
    if(2) { if(0); else { cout << "zero\n"; } }

    {} //valid

    return 0;
}