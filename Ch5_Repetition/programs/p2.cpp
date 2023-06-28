#include <iostream>

using namespace std;

int main() {

    unsigned int size;
    cout << "Enter the size of the right triangle pattern: ";
    cin >> size;

    cout << "Type 1: \n";
    for(int i=size;i;i--){
        for(int j=size-i;j;j--){
            cout << " ";
        }
        for(int j=i*2-1;j;j--){
            cout << "*";
        }
        cout << endl;
    }

    cout << "Type 2: \n";
    for(int i=1;i<=size;i++){
        for(int j=size-i;j;j--){
            cout << " ";
        }
        for(int j=i*2-1;j;j--){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}