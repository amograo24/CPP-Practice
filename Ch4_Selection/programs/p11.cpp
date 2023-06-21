// calculator
#include <iostream>

using namespace std;

int main() {
    
    // int d1,d2,result;
    double d1,d2,result;
    char op;

    cout << "Enter <num1><operator><num2>: ";
    cin >> d1 >> op >> d2;

    switch(op) {
        case '+':
            result=d1+d2;
            break;
        case '-':
            result=d1-d2;
            break;
        case '*':
            result=d1*d2;
            break;
        case '/':
            result=d1/d2;
            break;
        default:
            result=0;
            break;
    }
    // cout << d1;
    // cout << endl;
    // cout << op;
    // cout << endl;
    // cout <<d2;
    // cout << endl;
    cout << d1 << op << d2;
    if(result) cout << " = " << result << endl;
    else cout << " is not valid!" << endl;

    return 0;
    
}