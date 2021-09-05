#include "EmpolyeeInterface.h"
Empolyee::Empolyee()
{
    name = " ";
    department = " ";
    salary = 0.0;
    date = " ";
}
void Empolyee::ReadData()
{
    cout << "Enter name : ";
    cin >> name;
    cout << endl;
    cout << "Enter department : ";
    cin >> department;
    cout << endl;
    cout << "Enter salary : ";
    cin >> salary;
    cout << endl;
    cout << "Enter date : ";
    cin >> date;
    cout << endl;
}
void Empolyee::InreaseSalary()
{
    string year = date.substr(6, 4);
    // to convert from string to integer 
    int newyear = stoi(year);
    int yearspend = 2021 - newyear;
    if (yearspend > 5)
    {
         salary += 0.2;
        cout << salary << endl;
    }
    else
    {
        cout << salary << endl;
    }
}
