#include <iostream>
using namespace std;

void inch_to_ft(float inch);

int main()
{
   float inch;
   cout << "Enter the measurement in inches: ";
   cin >> inch;
   inch_to_ft(inch);
   return 0;
}
 
void inch_to_ft(float inch)
{
   float ft = inch/12;
   cout << "Equivalent in feet: " << ft;
}