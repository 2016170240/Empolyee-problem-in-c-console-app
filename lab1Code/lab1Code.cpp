#include<iostream>
#include "EmpolyeeInterface.h"
using namespace std;
int main()
{
    int numOfEmp;
    cout << "enter number of Empolyees you want to add : ";
    cin >> numOfEmp;
    cout << endl;
    Empolyee* e1 = new Empolyee[numOfEmp];
    for (int i = 0; i < numOfEmp; i++)
    {
        e1[i].ReadData();
        e1[i].InreaseSalary();
    }
}