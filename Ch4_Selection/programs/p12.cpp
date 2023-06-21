#include <iostream>

using namespace std;

int main() {
    unsigned int val,notes_count=0;
    cout << "Enter the dollar value: ";
    cin  >> val;

    notes_count+=val/100;
    val%=100;
    notes_count+=val/50;
    val%=50;
    notes_count+=val/20;
    val%=20;
    notes_count+=val/10;
    val%=10;
    notes_count+=val/5;
    val%=5;
    notes_count+=val/1;
    val%=1;

    notes_count?(cout << "Minimum notes: " << notes_count << endl):(cout << "It's zero, so no notes." << endl);

    return 0;
    
}