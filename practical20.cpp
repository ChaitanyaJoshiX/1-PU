/*
WAP to find the position of a given number in an array.
@ChaitanyaJoshiX
*/

#include <iostream>
using namespace std;

int main()
{
  int n, i, num;
  bool flag = false;
  cout << "Enter n : ";
  cin >> n;
  int arr[n];

  cout << "Enter the values : ";
  for(i=0; i<n; i++)
  {
    cin >> arr[i];
  }

  cout << "Enter the number to search : ";
  cin >> num;

  for(i=0; i<n; i++)
  {
    if(arr[i] == num)
    {
      cout << "Number found at position " << i << endl;
      flag = true;
      break;
    }
  }

  if(flag != true)
  {
    cout << "Number not found" << endl;
  }
  return 0;
}
