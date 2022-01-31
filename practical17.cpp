/*
WAP to find the sum and average of “N” numbers.
@ChaitanyaJoshiX
*/

#include <iostream>
using namespace std;

main()
{
  int n, i, sum=0;
  cout << "Enter n : ";
  cin >> n;
  int numbers[n];

  cout << "Enter the values : ";

  for(i=0; i<n; i++)
  {
    cin >> numbers[i];
  }

  for(i=0; i<n; i++)
  {
    sum += numbers[i];
  }

  int average = sum / n;
  cout << "Sum = " << sum << endl;
  cout << "Average = " << average << endl;
}
