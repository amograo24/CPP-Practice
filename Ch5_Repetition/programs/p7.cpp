#include  <iostream>

using namespace std;

int main() {

    unsigned int upper_limit;
    do {
        cout << "Enter +ve upper inclusive limit: ";
        cin >> upper_limit;
    } while(upper_limit<=0);

    for(int i=1;i<=upper_limit;i++){
        if(!(i%5) && !(i%7)){
            cout << i << " ";
        }
    }
    cout << endl;
    for(int i=1;i<=upper_limit;i++){
        if(i%5==0 && i%7==0){
            cout << i << " ";
        }
    }
    return 0;
}