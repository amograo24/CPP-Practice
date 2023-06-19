// Assume a party of three couples dines in a restaurant. The first family has two children. 
// Each of the other families has one child. Write a program that divides the bill among each family if a child is 
// charged 3/4 of an adult share. The total charge (before tax) is given as an input. The tax is 9.5 percent, 
// and 20 percent must be added for service.

#include <iostream>

using namespace std;

int main() {

    double total_charge,fam1_pt,fam2_pt,fam3_pt;
    const double tax=0.095, service=0.2;
    cout << "Enter the total charge: ";
    cin >> total_charge;
    const double adult_share = total_charge / 9; // 6C + 4*(3C/4) = 9C = Total Charge
    const double child_share = adult_share * 0.75;

    cout << "Adult share: " << adult_share << endl;
    cout << "Child share: " << child_share << endl;

    fam1_pt=2*adult_share+2*child_share;
    fam2_pt=fam3_pt=2*adult_share+child_share;

    cout << "Pre-Tax: " << endl;
    cout << "Family 1: " << fam1_pt << endl;
    cout << "Family 2: " << fam2_pt << endl;
    cout << "Family 3: " << fam3_pt << endl << endl;

    cout << "Post-Tax: " << endl;
    cout << "Family 1: " << fam1_pt+fam1_pt*tax+fam1_pt*service << endl;
    cout << "Family 2: " << fam2_pt+fam2_pt*tax+fam2_pt*service << endl;
    cout << "Family 3: " << fam3_pt+fam3_pt*tax+fam3_pt*service << endl;
    return 0;
}