#include  <iostream>

using namespace std;

int main() {
    int n1,n2,temp;
    do {
        cout << "Enter +ve n1: ";
        cin >> n1;
    } while(n1<=0);
    do {
        cout << "Enter +ve n2: ";
        cin >> n2;
    } while(n2<=0);

    n1>n2?(temp=n1,n1=n2,n2=temp):0;
    for(int i=1;i<=n1/2;i++){
        // if(!(n1%i) && !(n2%i)) {
        if(!(n1%i || n2%i)) { // !(false or false) = !(0 or 0) !false = true
            cout << i << " ";
        }
    }
    if (!(n2%n1)) cout << n1;
    cout << endl;
    return 0;
}