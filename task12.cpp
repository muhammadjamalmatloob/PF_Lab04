#include <iostream>
using namespace std;

void total_payable_amount(string day , int total_purchase_amount);

int main()
{
   string day;
   int total_purchase_amount;
   while (true)
   {
      cout << "Enter day of purchase: ";
      cin >> day;
      cout << "Enter total puchase amount: $";
      cin >> total_purchase_amount;
      total_payable_amount(day , total_purchase_amount);
   }
   return 0;
}

void total_payable_amount(string day , int total_purchase_amount)
{
   int disc = 5;
   if (day == "Sunday")
   {
     disc = 10;
   }
   int payable_amount =  total_purchase_amount - (total_purchase_amount/100)*disc;
   cout << "Payable Amount: $" << payable_amount << endl;
}