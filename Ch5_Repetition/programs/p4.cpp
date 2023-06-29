#include  <iostream>

using namespace std;

int main() {

    unsigned int pcount=0,ncount=0;
    int inp;
    cout << "Enter 0 to stop.\n";
    do {
        cout << "Enter a number: ";
        cin >> inp;
        if(inp>0) pcount++; else if(inp<0) ncount++;
    } while(inp);
    cout << "You entered " << pcount << " +ve integers, and " << ncount << " -ve integers." << endl;
    return 0;
}