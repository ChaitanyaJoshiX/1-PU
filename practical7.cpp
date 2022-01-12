/*
WAP to check whether a given year is a leap year or not
using an if else statement.
@ChaitanyaJoshiX
*/

#include <iostream.h>
#include <conio.h>

void main()
{
  clrscr();
  int year;
  cout << "Enter the year : ";
  cin >> year;
  if(year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
  {
    cout << year << " is a leap year." << endl;
  }
  else
  {
    cout << year << " is not a leap year." << endl;
  }
  getch();
}
