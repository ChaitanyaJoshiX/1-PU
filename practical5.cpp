#include <iostream.h>
#include <conio.h>
void main()
{
    int x,y,z;
    int largest,middle,smallest;
    cout << "Enter the 3 numbers : ";
    cin >> x >> y >> z;

    largest = x;
    if (y > largest)
    {
        largest = y;
    }
    if (z > largest)
    {
        largest = z;
    }

    smallest = y;
    if (x < smallest)
    {
        smallest = x;
    }
    if (z < smallest)
    {
        smallest = z;
    }

    middle = (x + y + z) - (largest + smallest);
    cout << "Largest " << largest << endl;
    cout << "Middle " << middle << endl;
    cout << "Smallest " << smallest << endl;
    getch();
}
