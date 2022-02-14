/*
WAP to input the register number, name, class and section of "n"
students in a class into a structure and output the data in a tabular manner.

@ChaitanyaJoshiX
*/
#include <iostream>
using namespace std;

main()
{
    struct student // Declaring struct with members
    {
        int register_no;
        string name;
        string class_name;
        char section;
    };

    int n, i;
    cout << "Enter the number of students: ";
    cin >> n;
    student stu[n]; // Initializing "n" number of students in structure
    cout << endl;

    // Accepting all the details
    for(i=0; i<n; i++)
    {
        cout << "Enter details of Student " << (i+1) << endl;
        cout << "Enter the register number : ";
        cin >> stu[i].register_no;
        cout << "Enter the name : ";
        cin >> stu[i].name;
        cout << "Enter the class : ";
        cin >> stu[i].class_name;
        cout << "Enter the section : ";
        cin >> stu[i].section;
        cout << "-----------------------------------------------" << endl;
    }

    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl;
    
    // Displaying all the details
    for(i=0; i<n; i++)
    {
        cout << "Details of Student " << (i+1) << endl;
        cout << "Register number : " << stu[i].register_no << endl;
        cout << "Name : " << stu[i].name << endl;
        cout << "Class : " << stu[i].class_name << endl;
        cout << "Section : " << stu[i].section << endl;
        cout << "-----------------------------------------------" << endl;
    }
}
