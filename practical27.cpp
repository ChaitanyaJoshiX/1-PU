/*
WAP to find the GCD and LCM of two numbers using functions.
@ChaitanyaJoshiX
*/
#include <iostream>
using namespace std;

int CalculateGCD(int a, int b)
{
  int greater = 1;
  int i;
  for(i=2;i<=min(a,b);i++)
  {
    if(a % i == 0 && b % i == 0)
    {
      if(i > greater)
      {
        greater = i;
      }
    }
  }
  return greater;
}

int CalculateLCM(int a, int b, int gcd)
{
  int smaller = (a / gcd) * b;
  return smaller;
}

main()
{
  int a,b;
  cout << "Enter two numbers : ";
  cin >> a >> b;
  int gcd = CalculateGCD(a,b);
  int lcm = CalculateLCM(a,b,gcd);
  cout << "GCD = " << gcd << endl;
  cout << "LCM = " << lcm << endl;
}
