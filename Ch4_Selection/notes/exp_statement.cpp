#include <iostream>

using namespace std;

int main() {

    int x, z;
    ({
        x=6;
        // cout << "Hello" << endl; // shows error
        char h[]="hello";
    });
    {
        cout << "Here no error\n";
    }
    cout << "no issue here" << endl;
    return 0;
}