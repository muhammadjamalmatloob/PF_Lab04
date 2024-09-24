#include <iostream>
using namespace std;

void sum(float a , float b);

int main()
{
   float num1,num2;
   char op;
   cout << "Enter first number: ";
   cin >> num1;
   cout << "Enter second number: ";
   cin >> num2;
   cout << "Enter an operator: ";
   cin >> op;
   if (op == '+')
   {
      sum(num1 , num2);
   }
   return 0;
}

void sum(float a , float b)
{
   cout << "Sum: " << a+b;
}

