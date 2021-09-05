#include<iostream>
using namespace std;
#include<string>
class Empolyee
{
    string name;
    string department;
    float salary;
    string date;
public:
    Empolyee();
    void ReadData();
    void InreaseSalary();
};