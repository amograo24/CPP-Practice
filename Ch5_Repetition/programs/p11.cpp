#include  <iostream>
#include <limits>

using namespace std;

int main() {

    int attempts;
    int min=numeric_limits<int>::max(), max=numeric_limits<int>::min();
    do {
        cout << "Enter the number of scores you wish to enter: ";
        cin >> attempts;
    } while((attempts<0 || attempts>10) && cout << "Enter within 0 and 10!\n");
    // cout << attempts;
    for(int i=1;i<=attempts;i++){
        int inp;
        do {
            cout << "Enter Score " << i << ": ";
            cin >> inp;
        } while((inp<0 || inp>100) && cout << "Re-enter a value between 0 and 100!\n");

        min=inp<min?inp:min;
        max=inp>max?inp:max;
    }

    cout << "The maximum score is: " << max << endl;
    cout << "The minimum score is: " << min << endl;
    return 0;
}