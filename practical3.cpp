#include <iostream.h>
#include <conio.h>
void main()
{
    clrscr();
    float r;
    float area,circ;
    cout << "Enter the radius of circle : ";
    cin >> r;
    area = 3.14 * r * r;
    circ = 2 * 3.14 * r;
    cout << "Area = " << area << endl;
    cout << "Circumference = " << circ << endl;
    getch()
}
