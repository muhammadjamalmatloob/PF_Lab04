#include <iostream>
using namespace std;

void calculatefuel(float d);

int main()
{
   float distance;
   cout << "Enter the distance: ";
   cin >> distance;
   calculatefuel(distance);
   return 0;
}

void calculatefuel(float d)
{
   if (d*10 >= 100)
   { 
      cout << "Fuel needed: " << d*10;
   }
   else
   {
      cout << "Fuel needed: 100"; 
   } 
}    