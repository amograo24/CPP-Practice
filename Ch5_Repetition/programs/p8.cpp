#include  <iostream>

using namespace std;

int main() {

    int inp;
    do {
        cout << "Enter a +ve integer: ";
        cin >> inp;
    } while(inp<=0);
    
    for(int i=1;i<=inp/2;i++){
        if(inp%i==0) cout << i << " ";
    }
    cout << endl;
    for(int i=inp/2;i;i--){
        if(!(inp%i)) cout << i << " ";
    }
    cout << endl;
    return 0;
}