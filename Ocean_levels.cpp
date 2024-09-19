//Remember to use float for decimals
//Remember 1.5 is constant
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
//What I found most challenging was the for loop.
//The problem I encoutered was that I forgot to add the semicolon after the for loop.
//What I learned was how to use i++ to add 1 to i.