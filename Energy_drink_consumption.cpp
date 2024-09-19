// Remember to multiply
// Float for decimals
#include <iostream>
using namespace std;
int main() 
{ 
 const int number_surveyed = 16500;
   float percent_1_or_more = .15;
   float percent_pref_citrus = .58;
   float total_1_or_more = number_surveyed * percent_1_or_more;
   float grand_total = total_1_or_more * percent_pref_citrus;
   cout << "The approximate number of customers in the survey who purchase one or more energy drinks per week is ";
   cout << total_1_or_more << endl;
   cout << "The approximate number of customers in the survey who prefer citrus-flavored energy drinks is ";
   cout << grand_total << endl;
   return 0;
}
// What I found most challenging was figuring out what to multiply
//The problem I encountered was forgetting to use const. To fix it I just added const to the beginning of the line.
//What I learned is that you need to use const for numbers that will not change.