#include <iostream>

using namespace std;

int main() {
    unsigned int total=0, inp;
    float avg;
    char grade;
    cout << "Enter score 1: ";
    cin >> inp;
    total+=inp;

    cout << "Enter score 2: ";
    cin >> inp;
    total+=inp;

    cout << "Enter score 3: ";
    cin >> inp;
    total+=inp;

    avg=total/3.0;
    if(avg >= 90 || 80<=avg && avg<90 && inp>=90) grade='A';
    else if(80<=avg && avg<90 || 70<=avg && avg<80 && inp>=80) grade='B';
    else if(70<=avg && avg<80 || 60<=avg && avg<70 && inp>=70) grade='C';
    else if(60<=avg && avg<70 || avg<60 && inp>=60) grade='D';
    else grade='F';

    cout << "Average score: " << avg << endl;
    cout << "Third score: " << inp << endl;
    cout << "Grade: " << grade << endl;
    return 0;
} 