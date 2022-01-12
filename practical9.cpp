/*
WAP to input the number of units of electricity consumed in a
house and calculate the final amount using nested-if statement.
Use the following data for calculation:
Units Consumed Cost
< 30 Rs 3.50 / unit
>=30 and <50 Rs 4.25 / unit
>=50 and < 100 Rs 5.25 / unit
>=100 Rs 5.85 /unit
@ChaitanyaJoshiX
*/
#include <iostream.h>
#include <conio.h>
void main()
{
    getch();
    double elecunits,amount;
    cout << "Enter the number of units consumed : ";
    cin >> elecunits;
    if(elecunits < 30)
    {
        amount = elecunits * 3.50;
    }
    else if(elecunits >= 30 && elecunits < 50)
    {
        amount = (29 * 3.50) + (elecunits - 29) * 4.25;
    }
    else if(elecunits >= 50 && elecunits < 100)
    {
        amount = (29 * 3.50) + (19 * 4.25) + (elecunits - 49) * 5.25;
    }
    else
    {
        amount = (29 * 3.50) + (19 * 4.25) + (49 * 5.25) + (elecunits - 99) * 5.85;
    }
    cout << "Final amount = " << amount << endl;
    getch();
}
