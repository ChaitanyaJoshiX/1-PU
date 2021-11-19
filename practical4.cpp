// Calculating Area of a Scalene Triangle.
#include <iostream.h>
#include <conio.h>
#include <math.h>
void main()
{
    clrscr();
    float s1,s2,s3;
    float s,area;
    cout << "Enter the three sides : ";
    cin >> s1 >> s2 >> s3;
    s = (s1+s2+s3)/2;
    area = sqrt(s*(s-s1)*(s-s2)*(s-s3));
    cout << "Area = " << area << endl;
    getch();
}
