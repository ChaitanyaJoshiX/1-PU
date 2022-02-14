/*
WAP to do the following :
Consider an array MARKS[20][5] which stores the marks obtained
by 20 students in 5 subjects.
Now write a program to:
a) Find the average marks obtained in each subject
b) Find the average marks obtained by every student
c) Find the number of students who have scored below 50 in their average.

@ChaitanyaJoshiX
*/

#include<iostream>
using namespace std;

main()
{
  int marks[20][5], n, s, total, count=0, i, j;
  float average;
  cout << "Enter the number of students: ";
  cin >> n;
  cout << "Enter the number of subjects: ";
  cin >> s;
  cout << "Enter the marks: " << endl;

  for (i = 0; i < n; i++)
  {
    for (j = 0; j < s; j++)
    {
      cin >> marks[i][j];
    }
  }

  cout<<endl<<"Average of Subjects"<<endl;
  cout<<"Sub1\tSub2\tSub3\tSub4\tSub5"<<endl;
  for(i = 0; i < s; i++)
  {
    total = 0;
    for(j = 0; j < n; j++)
    {
      total = total + marks[j][i];
    }
    average = total/n;
    cout<<average<<"\t";
  }
  cout<<endl<<"Average of students:"<<endl;
  cout<<"\tStudent\tAverage"<<endl;
  for(i = 0; i < n; i++)
  {
    total = 0;
    for(j = 0; j < s; j++)
    {
      total = total + marks[i][j];
    }
    average = total/s;
    if(average<50)
    {
      count++;
    }
    cout<<" \t"<<i+1<<"\t"<<average<<endl;
  }
  cout<<endl<<"Number of students less than average is "<<count<<endl;
}
