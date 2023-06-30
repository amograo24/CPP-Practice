#include  <iostream>

using namespace std;

int main() {

    int num,temp, reversed=0;
    do {
        cout << "Enter a positive number: ";
        cin >> num;
    } while(num<0 && cout << "Re-enter a positive number only!\n");

    cout << num << " reversed is ";
    temp=num;
    while(num){
        reversed=(reversed*10)+num%10;
        num/=10;
    }

    cout << reversed << endl;

    if(temp==reversed) cout << "Hence it's a pallindrome :)\n";
    else cout << "Therefore, it's not a pallindrome\n";
    
    return 0;
}