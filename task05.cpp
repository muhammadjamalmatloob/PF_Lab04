#include <iostream>
using namespace std;

void vote(int age);

int main()
{
   int age;
   cout << "Enter your age: ";
   cin >> age;
   vote(age);   
   return 0;
}

void vote(int age)
{
   if (age >= 18)
   {
      cout << "You are eligible to vote.";
   }
   else
   {
      cout << "You are not eligible to vote.";
   }
}