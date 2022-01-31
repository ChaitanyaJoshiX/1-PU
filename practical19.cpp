/*
WAP to arrange a list of numbers in ascending order.
@ChaitanyaJoshiX
*/

#include <iostream>
using namespace std;

main()
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

  for(i=0; i<l; i++) // Bubble sort.
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

  cout << "After sorting : [ ";
  for(i=0;i<l;i++) // Displaying original array.
  {
    cout << arr[i] << " ";
  }
  cout << "]" << endl;
}
