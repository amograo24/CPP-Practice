#include  <iostream>

using namespace std;

int main() {
    // we are checking only from 2000 to 2099

    for(int i=2000;i<3000;i++){
        // divisible by 4 and not by 100 or divisible by 400
        // i%4==0 && i%100!=0 || i%400==0
        // !(i%4) && i%100 || !(i%400)
        bool is_leap_year=!(i%4) && i%100 || !(i%400);
        if(is_leap_year) cout << i << endl;
    }
    
    return 0;
}