/*
WAP to check whether a given number is an Armstrong number
using do-while statement (Hint: 153 = 1cube + 5cube+ 3cube).
@ChaitanyaJoshiX
*/

#include<iostream.h>
#include<conio.h>
#include <stdlib.h>

void main()
{
  clrscr();
  int num, i, sum=0;
  cout << "Enter the number : ";
  cin >> num;
  int a = num;

  do
  {
    i = a % 10;
    sum += (i*i*i);
    a /= 10;
  } while(a != 0);

  if(num == sum)
  {
    cout << num << " is a Armstrong number" << endl;
  }
  else
  {
    cout << num << " is not a Armstrong number" << endl;
  }
  getch();
}
