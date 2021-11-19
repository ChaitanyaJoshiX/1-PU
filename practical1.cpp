// Interchanging value of 2 variables using a third variable.
#include <iostream.h>
#include <conio.h>
void main()
{
    clrscr();
    int a,b;
    int temp;
    cout << "Enter two numbers : ";
    cin >> a >> b;
    cout << "Before swapping : " << a << " " << b << endl;
    temp = a;
    a = b;
    b = temp;
    cout << "After swapping : " << a << " " << b << endl;
    getch();
}
