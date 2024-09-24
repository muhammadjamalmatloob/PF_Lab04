#include <iostream>
using namespace std;

void add();

int main()
{ 
   add();
   return 0;
}

void add()
{
   int n1, n2, sum;
   cout << "Enter n1: ";
   cin >> n1;
   cout << "Enter n2: ";
   cin >> n2;
   sum = n1 + n2;
   cout << "Sum: " << sum;
}