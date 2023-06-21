// Finding the number of days passed from the beginning of the year including the current day

#include <iostream>

using namespace std;

int main() {
    
   unsigned int year, month, day, days=0;
   unsigned int m1=31, m2, m3=31, m4=30, m5=31, m6=30, m7=31, m8=31, m9=30, m10=31, m11=30, m12=31;

   cout << "Enter the current year, month, and day: ";
   cin >> year >> month >> day;

   m2=(!(year%400) || !(year%4) && year%100)?29:28; // simple:(year%400==0 || year%4==0 && year%100!=0)

   switch(month) {
      case 12:
         days+=m11;
      case 11:
         days+=m10;
      case 10:
         days+=m9;
      case 9:
         days+=m8;
      case 8:
         days+=m7;
      case 7:
         days+=m6;
      case 6:
         days+=m5;
      case 5:
         days+=m4;
      case 4:  
         days+=m3;
      case 3:  
         days+=m2;
      case 2: 
         days+=m1;
      case 1:
         days+=0;
   }

   days+=day;

   cout << "The number of days passed from the beginning of the year including the current day is " << days << endl;

   return 0;
    
}