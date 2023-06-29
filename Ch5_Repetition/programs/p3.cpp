// the program doesn't ask us to stop when the inp<0 and inp>=1000
#include  <iostream>

using namespace std;

int main() {

    int inp,sum=0;
    double count=0;
    bool flag=true;
    cout << "Enter 1000 to stop";
    while(flag){
        cout << "Enter number in the range [0,1000): ";
        cin >> inp;
        if(inp>=0&&inp<1000){
            sum+=inp;
            count++;
        }
        else if(inp==1000){
            flag=false;
        }
        else {
            cout << inp << " is in the invalid range!\n";
        }
    }
    cout << "The average is: " << sum/count << endl;
    return 0;
}