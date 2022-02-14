/*
WAP to find the sum of two compatible matrices.

@ChaitanyaJoshiX
*/

#include <iostream>
using namespace std;

int SumMatrice(int rows1, int columns1, int rows2, int columns2)
{
  int matrix1[rows1][columns1];
  int matrix2[rows2][columns2];
  int i, j;

  cout << "Enter elements of matrix 1 : " << endl;
  for(i=0; i<rows1; i++) // Accepting elements
  {
      cout << "Enter row " << i+1 << " : ";
      for(j=0; j<columns1; j++)
      {
          cin >> matrix1[i][j];
      }
  }
  cout << endl;

  cout << "Enter elements of matrix 2 : " << endl;
  for(i=0; i<rows1; i++) // Accepting elements
  {
      cout << "Enter row " << i+1 << " : ";
      for(j=0; j<columns1; j++)
      {
          cin >> matrix2[i][j];
      }
  }
  cout << endl;
  cout << "=======================================================" << endl;

  int sum[rows1][columns1]; // Declaring a array to store sum
  for(i=0; i<rows1; i++)
  {
    for(j=0; j<columns1; j++)
    {
      sum[i][j] = matrix1[i][j] + matrix2[i][j];
    }
  }

  cout << "Sum of matrices : " << endl;
  for(i=0; i<rows1; i++)
  {
    for(j=0; j<columns1; j++)
    {
      cout << sum[i][j] << "  ";
    }
    cout << endl;
  }
  cout << "=======================================================" << endl;
}

main()
{
  int i, j;
  int rows1, rows2;
  int columns1, columns2;
  cout << "Enter the number of rows and columns of matrix 1: ";
  cin >> rows1 >> columns1;
  cout << "Enter the number of rows and columns of matrix 2: ";
  cin >> rows2 >> columns2;
  cout << "=======================================================" << endl;
  if(rows1 == rows2 && columns1 == columns2)
  {
    SumMatrice(rows1, columns1, rows2, columns2);
  }
  else
  {
    cout << "Matrices are not compatible!" << endl;
  }
}
