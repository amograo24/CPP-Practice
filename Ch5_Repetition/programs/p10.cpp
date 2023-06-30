#include  <iostream>

using namespace std;

int main() {

    int m,n,temp;
    do {
        cout << "Enter +ve int m: ";cin >> m;
    } while(m<=0);
    do {
        cout << "Enter +ve int n: ";cin >> n;
    } while(n<=0);

    cout << "The greatest common divisor between " << m;
    cout << " and " << n;
    n>m?(temp=n,n=m,m=temp):0;
    while(n){
        // let m=m-n
        m-=n;
        // swap m and n if n>m
        n>m?(temp=n,n=m,m=temp):0;
    }

    cout << " is " << m << endl;


    return 0;
}