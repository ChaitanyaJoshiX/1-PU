/*
WAP to find the sum of all the digits of a number using while
statement.

@ChaitanyaJoshiX
*/
#include <iostream.h>
#include <conio.h>

void main()
{
  clrscr();
  int n,temp,sum=0;
  cout << "Enter the number : ";
  cin >> n;
  while(n != 0)
  {
    temp = n % 10; // Temporarily stores digit
    sum += temp;
    n /= 10;
  }
  cout << "Sum of digits = " << sum << endl;
  getch();
}
