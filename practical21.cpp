/*
WAP to check whether a given matrix is scalar or not.
Scalar Matrix :
[[1 0 4]
 [5 1 7]
 [5 6 1]]
princiapl diagonal is same.

@ChaitanyaJoshiX
*/

#include <iostream>
using namespace std;


bool checkScalar(int rows, int columns)
{
  if(rows != columns) // Primary condition
  {
    cout << "Rows must be equal to colums for Scalar matrix." << endl;
    return false;
  }

  int i, j, k=0;
  bool flag;
  int mat[rows][columns]; // Initializing matrix with required dimension.

  cout << "Enter elements : " << endl << endl;
  for(i=0; i<rows; i++)
  {
    cout << "Enter row " << i+1 << " : ";
    for(j=0; j<columns; j++)
    {
      cin >> mat[i][j];
    }
    cout << endl;
  }

  for(i=0; i<rows; i++)
  {
    for(j=0; j<columns; j++)
    {
      cout << mat[i][j] << " ";
    }
    cout << endl;
  }

  int temp = mat[0][0]; // Initializing with first value
  for(i=0; i<rows; i++)
  {
    if(i = rows - 1) // Excecuted if loop reaches last iteration
    {
      if(mat[i][k] == temp)
      {
        k++;
        flag = true;
        break;
      }
    }

    if(mat[i][k] == temp)
    {
      k++;
    }

    else // Breaks immediately when a unequal element is found
    {
      flag = false;
      break;
    }

  }
  return flag;
}

main()
{
  int rows, columns;
  cout << "Enter the order of matrix (rows columns): ";
  cin >> rows >> columns;


  bool result = checkScalar(rows, columns); // Calling function to check for scalar matrix
  if(result == true)
  {
    cout << "It is a scalar matrix!" << endl;
  }
  else
  {
    cout << "It is not a scalar matrix!" << endl;
  }
}
