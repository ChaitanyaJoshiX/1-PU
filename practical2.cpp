// Interchanging value of 2 variables without using a third variable.
#include <iostream.h>
#include <conio.h>
void main()
{
    clrscr();
    int a,b;
    cout << "Enter two numbers : ";
    cin >> a >> b;
    cout << "Before swapping : " << a << " " << b << endl;
    a = a+b;
    b = a-b;
    b = a-b;
    cout << "After swapping : " << a << " " << b << endl;
    getch();
}
