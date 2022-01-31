/*
WAP to input principal amount, rate of interest and time period
and calculate compound interest using while statement
(Hint: CI = P * ( 1 + R / 100) T).
@ChaitanyaJoshiX
*/
#include<iostream.h>
#include<conio.h>

void main()
{
  clrscr();
  double pri, amount, principal, rate, interest;
  int time, year;
  cout << "Enter the Principal amount, rate of interest and time: ";
  cin >> pri >> rate >> time;
  year = 1;
  principal = pri;
  while(year <= time)
  {
    amount = pri * (1 + rate / 100);
    pri = amount;
    year++;
  }
  interest = amount - principal;
  cout << "Compound Interest = " << interest <<endl;
  getch();
}
