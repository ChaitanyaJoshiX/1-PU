/*
WAP to generate the Fibonacci sequence up to a limit using for
statement.
@ChaitanyaJoshiX
*/

#include <iostream>
using namespace std;

main()
{
    int i, limit;
    cout << "Enter limit for sequence : ";
    cin >> limit;

    int numlist[limit];
    numlist[0] = 0;
    numlist[1] = 1;

    cout << "Fibonacci Sequence : ";
    for(i=0; numlist[i] <= limit; i++)
    {
        if(i==0)
        {
            cout << numlist[i] << " ";
        }
        else
        {
            if(i != limit-1)
            {
              cout << numlist[i] << " ";
              numlist[i+1] = numlist[i-1] + numlist[i];
            }
            else
            {
              cout << numlist[i] << "." << endl;;
            }

        }
    }
}
