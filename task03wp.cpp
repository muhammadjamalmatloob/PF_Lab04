#include <iostream>
using namespace std;

void add(int n1, int n2);

int main()
{ 
   add(2,4);
   return 0;
}

void add(int n1, int n2)
{
   int sum;
   sum = n1 + n2;
   cout << "Sum: " << sum;
}