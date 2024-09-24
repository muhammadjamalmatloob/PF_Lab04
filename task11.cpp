#include <iostream>
using namespace std;

void print_name(string name);

int main()
{
   string name;
   cout << "Enter your name: ";
   getline(cin , name);
   while (true)
   {
      print_name(name);
   }
   return 0;
}

void print_name(string name)
{
      cout << name << endl;
}