#include <iostream>

using namespace std;

int main() {

    int inp,min;
    cout << "Enter integer 1: ";
    cin >> inp;
    min = inp;

    cout << "Enter integer 2: ";
    min=(cin >> inp && inp < min)?inp:min;

    cout << "Enter integer 3: ";
    min=(cin >> inp && inp < min)?inp:min;

    cout << "Min: " << min << endl;
    return 0;
}