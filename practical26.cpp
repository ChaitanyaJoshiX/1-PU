/*
Write a program to count the number of vowels and consonants in a string.
@ChaitanyaJoshiX
*/

#include <iostream>
using namespace std;

int CountVowels(string word)
{
    int l = word.length();
    int vowels=0, consonants=0, i;
    char temp;
    for(i=0;i<l;i++)
    {
        temp = tolower(word[i]);
        if(isalpha(temp)) // Checking for alphabet
        {
          if(temp =='a'|| temp =='e'|| temp =='i'|| temp =='o'|| temp =='u') // Checking for vowel
          {
              vowels++;
          }
          else // Else consonant
          {
            consonants++;
          }
        }
    }
    cout << "There are " << vowels << " vowels in " << word << endl;
    cout << "There are " << consonants << " consonants in " << word << endl;
}

main()
{
    string word;
    cout << "Enter a string : ";
    cin >> word;
    CountVowels(word); // Calling function
}
