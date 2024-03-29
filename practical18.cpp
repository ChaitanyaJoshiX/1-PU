/*
WAP to find the second largest of “N” numbers.
@ChaitanyaJoshiX
*/

#include <iostream>
using namespace std;

int main()
{
  int n, i;
  cout << "Enter n : ";
  cin >> n;
  int arr[n];

  cout << "Enter the values : ";
  for(i=0; i<n; i++)
  {
    cin >> arr[i];
  }

  int l = sizeof(arr)/sizeof(arr[0]);
  int j,temp;

  for(i=0; i<l; i++) // Using reverse bubble sort.
  {
    for(j=0; j<l-i-1; j++)
    {
      if(arr[j] > arr[j+1])
      {
        temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
  }

  int secLargest = arr[0];
  for (i=1; i < l-1; i++)
  {
    if (arr[i] > secLargest)
    {
        secLargest = arr[i];
    }
  }
  cout << "Second largest number : " << secLargest << endl;
  return 0;
}
