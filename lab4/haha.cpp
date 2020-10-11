#include <iostream>
#include <string.h>
using namespace std;
class Employee
{
private:
    int id;
    char *name;
    char *job;
    float workTime;
    int dirSalary();

public:
    Employee();
    Employee(int, char *, char *, float); // parametrt baiguulagch todorxoilj bn ~Employee();
    void set_id(int);                     // gishuun ogogdold utga onoox
    int get_id();                         //gishuun ogogdold utgiig butsaaj avna
    void set_name(char *);
    char *get_name();
    void set_job(char *);
    char *get_job();
    // anxdagch baiguulagch todorxoilj bna
    void set_workTime(float);
    float get_workTime();
    int salary(int);
    void print(int);
};
Employee ::Employee()
{
    name = new char[20];
    job = new char[20];
    strcpy(name, " "); //temdegted utga onoono strcpy(job, " ");
    workTime = 0;
    cout << "Anxdagch duudagdlaa" << endl;
};
Employee ::Employee(int a, char *b, char *c, float d)
{
    id = a;
    strcpy(name, b);
    strcpy(job, c);
    workTime = d;
    cout << "Parametrt baiguulagchg duudlaa" << endl;
};
Employee ::~Employee()
{
    cout << "Ustgagch funkts ajillaa" << endl;
};
void Employee ::set_id(int a)
{
    id = a;
}
int Employee ::get_id()
{
    return id;
}
// gishuun ogogdold utga damjiuulna
void Employee ::set_name(char *a)
{
    strcpy(name, a);
}
char *Employee ::get_name()

{
    return name;
}
void Employee ::set_job(char *a)
{
    strcpy(job, a);
}
char *Employee ::get_job()
{
    return job;
}
void Employee ::set_workTime(float a)
{
    workTime = a;
}
float Employee ::get_workTime()
{
    return workTime;
}
int Employee ::dirSalary()
{
    return workTime * 50000;
}
int Employee ::salary(int hoursal)
{
    int a, b;
    if (strcmp(job, "zaxiral") != 0)
    {
        return workTime * hoursal;
    }
    else
        return dirSalary();
}
void swap(Employee *a, Employee *b)
{
    char *name = new char[20];
    char *job = new char[20];
    float workTime;
    int id;

    id = a->get_id();
    strcpy(name, a->get_name());
    strcpy(job, a->get_job());
    workTime = a->get_workTime();
    a->set_id(b->get_id());
    a->set_name(b->get_name());
    a->set_job(b->get_job());
    a->set_workTime(b->get_workTime());
    b->set_id(id);
    b->set_name(name);
    b->set_job(job);
    b->set_workTime(workTime);
}
void Employee ::print(int hoursal)
{
    cout << "id : " << id << "|| ner: " << name << " || alban tushaal : " << job << "|| ajilsan tsag : " << workTime << "|| tsalin "
         << salary(hoursal) << endl;
}
int main()
{
    int n;
    cout << "Niit ajilchinii too=";
    cin >> n;
    Employee employees[n];
    Employee();
    int i, hoursal;
    char *name = new char[20];
    char *job = new char[20];
    float time;
    for (i = 0; i < n; i++)
    {
        cout << i + 1 << " id-tai ajiltnii ner : ";
        cin >> name;
        cout << i + 1 << " id-tai ajiltnii alban tushaal : ";
        cin >> job;
        cout << i + 1 << "id-tai ajiltnii ajilsan tsag : ";
        cin >> time;
        employees[i].set_id(i + 1);

        employees[i].set_name(name);
        employees[i].set_workTime(time);
        employees[i].set_job(job);
        cout << i + 1 << " idtai ajiltan amjilttai burtgegdlee" << endl;
    }
    cout << "tsagiin tsalin = ";
    cin >> hoursal;
    for (i = 0; i < n; i++)
    {
        employees[i].print(hoursal);
    }
    cout << endl;
    int l, j;
    for (i = 1; i < n; i++)
    {
        l = n - i;
        for (j = 0; j < l; j++)
        {
            if (employees[j].salary(hoursal) > employees[j + 1].salary(hoursal))
            {
                swap(employees[j], employees[j + 1]);
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        cout << "id : " << employees[i].get_id() << "|| ner: " << employees[i].get_name() << " || tushaal : " << employees[i].get_job()
             << "|| ajilsan tsag : " << employees[i].get_workTime() << "|| tsalin " << employees[i].salary(hoursal) << endl;
    }
    return 0;
}