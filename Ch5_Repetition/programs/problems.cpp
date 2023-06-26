#include <iostream>
using namespace std;

int main() {
    int x;
    x=13;
    while(x>7){
        cout << x << " ";
        x--;
    }
    cout << "\nx: " << x << endl;
    x=13;
    while(x>7){
        x--;
        cout << x << " ";
    }    
    cout << "\nx: " << x << endl;
    for(x=13;x>7;x--){
        cout << x << " ";
    }
    cout << "\nx: " << x << endl;
    x=13;
    do {
        cout << x << " ";
        x--;
    } while(x>7);
    cout << "\nx: " << x << endl;
    x=13;
    do {
        x--;
        cout << x << " ";
    } while(x>7);
    cout << "\nx: " << x << endl;


    return 0;
}