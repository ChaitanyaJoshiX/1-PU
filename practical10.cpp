/*
WAP to input the marks of four subjects, calculate the total
percentage and output the result as either “First class”, or “Second class”, or
“Pass class” or “Fails” using switch statement.

Class Range:
First Class Between 60 and 100%
Second Class Between 50 and 59%
Pass Class Between 40 and 49%
Fails Less than 40%

@ChaitanyaJoshiX
*/
#include <iostream.h>
#include <conio.h>

int checkClass(double total) // Returns choice for switch case
{
    int result;
    if(total >= 60.0 && total <= 100.0) // First class
    {
        result = 1;
    }
    else if(total >= 50.0 && total <=59.0) // Second class
    {
        result = 2;
    }
    else if(total >= 40.0 && total <=49.0) // Pass class
    {
        result = 3;
    }
    else if (total < 40.0) // Fail class
    {
        result = 4;
    }
    else
    {
        result = 0; // In case of invalid input
    }
    return result;
}

void main()
{
    clrscr();
    double m1, m2, m3, m4;
    double total;
    cout << "Enter the marks of 4 subjects : ";
    cin >> m1 >> m2 >> m3 >> m4;
    total = (m1 + m2 + m3 + m4) / 4;
    cout << "Total percentage = " << total << endl;
    int choice = checkClass(total);

    switch(choice)
    {
        case 1 : cout << "First class" << endl;
        break;
        case 2 : cout << "Second class" << endl;
        break;
        case 3 : cout << "Pass class" << endl;
        break;
        case 4 : cout << "Fail" << endl;
        break;
        default : cout << "Invalid inputs!" << endl;
    }
    getch();
}
