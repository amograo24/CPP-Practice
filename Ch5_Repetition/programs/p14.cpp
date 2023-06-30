#include  <iostream>

using namespace std;

int main() {

    int num, reversed=0;
    do {
        cout << "Enter a positive number: ";
        cin >> num;
    } while(num<0 && cout << "Re-enter a positive number only!\n");

    cout << num << " reversed is ";
    while(num){
        reversed=(reversed*10)+num%10;
        num/=10;
    }

    cout << reversed << endl;
    
    return 0;
}