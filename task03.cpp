#include <iostream>
using namespace std;

void how_many_stickers(int side_len);

int main()
{
   int len;
   cout << "Enter the side length of the Rubik's cube: ";
   cin >> len;
   how_many_stickers(len);
   return 0;
}

void how_many_stickers(int side_len)
{
   int stickers = side_len*side_len*6;
   cout << "Number of stickers needed: " << stickers;
}