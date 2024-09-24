#include <iostream>
using namespace std;

void sum(float a , float b);

void diff(float a , float b);

void pro(float a , float b);

void div(float a , float b);

int main()
{
   while (true)
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
      else if (op == '-')
      {
         diff(num1 , num2);
      } 
      else if (op == '*')
      {
         pro(num1 , num2);
      } 
      else if (op == '/')
      {
         div(num1 , num2);
      }
      else
      {
         cout << "Invalid Operator";
      } 
   } 
      return 0;
}

void sum(float a , float b)
{
   cout << "Sum: " << a+b << endl;
}

void diff(float a , float b)
{
   cout << "Subtraction: " << a-b << endl;
}

void pro(float a , float b)
{
   cout << "Product : " << a*b << endl;
}

void div(float a , float b)
{
   cout << "Division : " << a/b << endl;
}