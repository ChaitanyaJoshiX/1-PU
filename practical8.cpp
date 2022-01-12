/*
WAP to input a character and find out whether it is a lower case,
or upper case character using if-else statement.
@ChaitanyaJoshiX
*/
#include <iostream.h>
#include <conio.h>
#include <ctype.h>
void main()
{
  clrscr();
  char ch;
  cout  << "Enter a character : ";
  cin >> ch;
  if(islower(ch))
  {
    cout << ch << " is lower case." << endl;
  }
  else
  {
    cout << ch << " is upper case." << endl;
  }
  getch();
}
