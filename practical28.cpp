/*
WAP to find X^Y using functions.
@ChaitanyaJoshiX
*/
#include <iostream>
using namespace std;
int toPower(int x, int y)
{
  int i, answer=1;
  for(i=1; i<=y; i++) // Iterating loop "y" times
  {
    answer *= x;
  }
  return answer;
}
main()
{
  int x, y;
  cout << "Enter x and y : ";
  cin >> x >> y;
  int result = toPower(x, y);
  cout << "X^Y = " << result << endl;
}
