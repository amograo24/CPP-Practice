#include  <iostream>

using namespace std;

int main() {

    int num, sum=0;
    do {
        cout << "Enter a positive number: ";
        cin >> num;
    } while(num<0 && cout << "Re-enter a positive number only!\n");
    cout << "The sum of the digits of " << num;
    while(num){
        sum+=num%10;
        num/=10;
    }
    cout << " is " << sum << endl;
    return 0;
}