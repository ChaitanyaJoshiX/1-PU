/*
WAP to check whether a given string is a palindrome or not.
@ChaitanyaJoshiX
*/
#include <iostream>
using namespace std;

void checkPalindrome(string str)
{
  string a = "";
  int i;
  int l = str.length();
  for(i=l-1; i>=0; i--)// Using loop to extract character from end
  {
    a += str[i];
  }

  if(a == str)
  {
    cout << "This string is a palindrome" << endl;
  }
  else
  {
    cout << "This string is not a palindrome" << endl;
  }
}

main()
{
  string str;
  cout << "Enter the string : ";
  cin >> str;

  checkPalindrome(str); // Calling function to check
}
