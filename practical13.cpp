/*
WAP to check whether a given number is a power of 2.
@ChaitanyaJoshiX
*/

#include<iostream.h>
#include<conio.h>

void main()
{
  clrscr();
  int n, a;
  int flag = 0;
  cout << "Enter the number : ";
  cin >> n;
  a = n;

  while(n > 2)
  {
    if(n % 2 == 1)
    {
      flag = 1;
      break;
    }
    else
    {
      n = n / 2;
    }
  }

  if(flag != 1)
  {
    cout << a <<" is power of 2 "<< endl;
  }
  else
  {
    cout << a <<" is not power of 2 "<< endl;
  }
  getch();
}
