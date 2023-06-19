// Write a program that inputs four scores (int values) and finds and prints the average of the scores (a double value).

#include <iostream>

using namespace std;

int main() {
    int score1, score2, score3, score4;
    // double avg;
    cout << "Enter the first score: ";
    cin >> score1;
    cout << "Enter the second score: ";
    cin >> score2;
    cout << "Enter the third score: ";
    cin >> score3;
    cout << "Enter the fourth score: ";
    cin >> score4;
    cout << "Average: " << (score1+score2+score3+score4)/4.0 << endl; // 4.0 is used instead of 4 to avoid integer division
    
    return 0;
}