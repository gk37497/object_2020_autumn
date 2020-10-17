#include <iostream>
#include <cstring>
#include <stdlib.h>
using namespace std;
class employee
{
private:
    int id;
    char name[20];
    char position[20];
    float worktime;

public:
    void value();
    void getData();
    void printdata();
    float salary();
    float Dsalary();
    float Work();
};
void employee::value()
{
    id = 0;
    strcpy(name, "");
    strcpy(position, "ajilchin");
    worktime = 0;
}
void employee::getData()
{
    cout << "id : ";
    cin >> id;
    cout << "name : ";
    cin >> name;
    cout << "position : ";
    cin >> position;
    cout << "ajilsan tsag :";
    cin >> worktime;
}
void employee::printdata()
{
    cout << "id : ";
    cout << id << "   ";
    cout << "name : ";
    cout << name << "   ";
    cout << "position : ";
    cout << position << "   ";
    cout << "work time : ";
    cout << worktime << "\n";
}
float employee::salary()
{
    int hoursalary = 5000, sal = 0;
    int k = strcmp(position, "zahiral");
    if (k == 0)
    {
        sal = hoursalary * worktime + Dsalary();
        //zahirliin tsalin nemeh
    }
    else
    {
        sal = hoursalary * worktime;
    }
    return sal;
}
float employee::Dsalary()
{
    int hoursal = 10000, dsal;
    dsal = hoursal * worktime;
    return dsal;
}
int main()
{
    employee emp;
    emp.value();
    emp.getData();
    emp.printdata();
    cout << "tsalin ni " << emp.salary();
}
