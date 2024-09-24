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
   int fuel = d*10;
   cout << "Fuel needed: " << fuel;
}    