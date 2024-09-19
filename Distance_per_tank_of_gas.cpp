//Remember to add gallons with MPG
#include <iostream>
using namespace std;
int main() 
{ 
  const int number_of_gallons = 20;
   float in_town_MPG = 23.5;
   float out_of_town_MPG = 28.9;
   float in_town_distance = number_of_gallons * in_town_MPG;
   float out_of_town_distance = number_of_gallons * out_of_town_MPG;
   cout << "The distance a car can travel in town on a 20 gallon tank of gas is "<< in_town_distance << " miles." << endl;
   cout << "The distance a car can travel on the highway on a 20 gallon tank of gas is " << out_of_town_distance << " miles." << endl;
   return 0;
}
//What I found most challenging was putting it all together with cout.
//The problem I encountered was that I forgot to add float when multiplying.
//What I learned was that I need to remember to use cout and float.