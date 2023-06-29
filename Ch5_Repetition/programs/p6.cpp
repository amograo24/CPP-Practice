#include  <iostream>

using namespace std;

int main() {

    cout << "All numbers between 1 and 100 that are divisible by 7: \n";
    for(int i=7;i<100;i+=7){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}