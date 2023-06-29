#include  <iostream>

using namespace std;

int main() {

    int n1,n2,temp;

    do {
        cout << "Enter a +ve integer n1: ";
        cin >> n1;
    } while(n1<0);
    do {
        cout << "Enter a +ve integer n2: ";
        cin >> n2;
    } while(n2<0);

    // if(n1>n2){
    //     temp=n1;
    //     n1=n2;
    //     n2=temp;
    // }
    // n1>n2?(temp=n1,n1=n2,n2=temp):(n1=n1,n2=n2);
    n1>n2?(temp=n1,n1=n2,n2=temp):0;
    cout << "Even numbers between " << n1 << " and " << n2 << " (both inclusive): \n";
    for(int i=n1%2?n1+1:n1;i<=n2;i+=2){
        cout << i << " ";
    }
    cout << "\nOdd numbers between " << n1 << " and " << n2 << " (both inclusive): \n";
    for(int i=n1%2?n1:n1+1;i<=n2;i+=2){
        cout << i << " ";
    }
    return 0;
}