// Calculate ocean's level in 5, 7, and 10 years starting from 1.5 millimeters
// Remember to use float for decimals
// 
#include <iostream>
using namespace std;
int main() 
{ 
 const float RISE_PER_YEAR = 1.5;
 float number_of_millimeters_each_year = 0;
 for (int i = 1; i <= 10; i++) 
   {
   number_of_millimeters_each_year += RISE_PER_YEAR;
 cout << "Year " << i << " : " << number_of_millimeters_each_year << endl;}
return 0;}