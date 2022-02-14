/*
WAP to sum of all the rows and the sum of all the columns of a
matrix separately.

@ChaitanyaJoshiX
*/

#include <iostream>
using namespace std;

main()
{
    int i, j;
    int rows, columns;
    cout << "Enter the number of rows and columns : ";
    cin >> rows >> columns;

    int matrix[rows][columns];
    cout << "Enter elements : " << endl << endl;
    for(i=0; i<rows; i++) // Accepting elements
    {
        cout << "Enter row " << i+1 << " : ";
        for(j=0; j<columns; j++)
        {
            cin >> matrix[i][j];
        }
    }

    cout << endl;

    int rows_sum=0, colu_sum=0;
    for(i=0; i<rows; i++) // Displays sum of each row
    {
        for(j=0; j<columns; j++)
        {
            rows_sum += matrix[i][j];
        }
        cout << "Sum of row " << (i+1) <<" = " << rows_sum << endl;
        rows_sum = 0;
    }

    cout << endl;

    for(i=0; i<columns; i++) // Displays sum of each column
    {
        for(j=0; j<rows; j++)
        {
            colu_sum += matrix[j][i];
        }
        cout << "Sum of column " << (i+1) <<" = " << colu_sum << endl;
        colu_sum = 0;
    }
}
