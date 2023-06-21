#include <iostream>

using namespace std;

int main() {
    unsigned int quadrant;
    int x, y;

    cout << "Enter the x and y coordinates: ";
    cin >> x >> y;

    quadrant=x>0?y>0?1:4:y>0?2:3;   // (x>0)?(y>0?1:4):(y>0?2:3);

    cout << "The point (" << x << ", " << y << ") is in quadrant " << quadrant << endl;

    return 0;
    
}