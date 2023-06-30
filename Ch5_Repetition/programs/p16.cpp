#include  <iostream>
#include <iomanip>

using namespace std;

int main() {

    for(int i=0;i<100;i++){
        cout << setw(2) << i << " degree Celsius is " << fixed << setw(6) << setprecision(2) << i*1.8+32 << " degree Fahrenheit\n";
    }
    return 0;
}