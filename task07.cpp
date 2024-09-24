#include <iostream>
using namespace std;

void even_or_odd(int a);

int main()
{
   int num;
   cout << "Enter a number: ";
   cin >> num;
   even_or_odd(num);
   return 0;
}

void even_or_odd(int a)
{
   if (a%2 == 0)
   { 
      cout << "Number " << a << " is even.";
   }
   else
   { 
      cout << "Number " << a << " is odd.";
   }
}