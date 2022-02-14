/*
An industrial organization wants to computerize the Allowance calculations.
Given the monthly Sales for the salesman, the rules for the calculations are
as follows:
i. If the total sales is less than Rs. 10000/- there is no allowance.
ii. If the total sales is between Rs. 10000/- and Rs. 20,000/- then the
Allowance is 10% of the sales amount or Rs. 1800/- whichever is
minimum.
iii. If the total sales is greater than or equal to Rs. 20000/- then the
allowance is 20% of the sales amount or Rs.6,000/- whichever is
minimum.
WAP using a function to calculate the allowance.

@ChaitanyaJoshiX
*/
#include <iostream>
using namespace std;

double calAllowance(double sales)
{
  double return_allowance, temp;
  if(sales < 10000.0)
  {
    return_allowance = 0;
  }
  else if(sales >= 10000.0 && sales < 20000.0)
  {
    temp = (10/100.0) * sales;
    return_allowance = min(temp, 1800.0);
  }
  else
  {
    temp = (20/100.0) * sales;
    return_allowance = min(temp, 6000.0);
  }
  return return_allowance;
}

main()
{
  double sales;
  cout << "Enter the total sales of the salesman : ";
  cin >> sales;
  double allowance = calAllowance(sales);
  cout << "The allowance = " << allowance << endl;
}
