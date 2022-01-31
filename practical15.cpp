/*
WAP to find the factorial of a number using for statement.
@ChaitanyaJoshiX
*/

#include <iostream.h>
#include <conio.h>

void main()
{
  clrscr();
  int n, i, fact=1;
  cout << "Enter the number : ";
  cin >> n;

  for(i=n; i>=1; i--)
  {
    fact *= i;
  }
  cout << "Factorial = " << fact << endl;
  getch();
}
