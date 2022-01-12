/*
WAP to input the total amount in a bill,
If the amount is greater than 1000 the a discount of 8% is given
otherwise no discount is given.
Output the total amount, the discount amount and the final amount, use
simple if statement.
@ChaitanyaJoshiX
*/

#include <iostream.h>
#include <conio.h>

void main()
{
  clrscr();
  double amount,discount,finamount;
  cout << "Enter the total amount :";
  cin >> amount;
  if(amount > 1000.0)
  {
    discount = (8/100.0) * amount;
    finamount = amount - discount;
  }
  cout << "Total amount\tDiscount\tFinal amount" << endl;
  cout << amount << "\t\t" << discount << "\t\t" << finamount << endl;
  getch();
}
