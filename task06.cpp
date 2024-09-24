#include <iostream>
using namespace std;

void pass_or_fail(int score);

int main()
{
   int score;
   cout << "Enter your score: ";
   cin >> score;
   pass_or_fail(score);
   return 0;
}

void pass_or_fail(int score)
{
   if (score > 50)
   {
      cout << "Pass";
   }
   else
   {
      cout << "Fail";
   }
}