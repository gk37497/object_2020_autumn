#include <iostream>
#include <string.h>
#include <cstring>
#include <iomanip>
using namespace std;
int k = 0, p = 0;
class Ajilchin
{
private:
    float ZahiralTsalin();
    int dugaar;
    char *name;
    char *albanTushaal;
    float ajilsanTsag;
    int ids[100];

public:
    Ajilchin();
    Ajilchin(int, char *, char *, float);
    void Utgaavah();
    void Print();
    //get and set--------
    void set_dugaar(int);
    int get_dugaar();
    void set_name(char *);
    char *get_name();
    void set_albanTushaal(char *);
    char *get_albanTushaal();
    void set_ajilsanTsag(int);
    float get_ajilsanTsag();
    //-------------------
    float tsalinBoddoh();
    float Tsagnemeh();
    void swap();
    //jishee
    void idAvah();
    ~Ajilchin();
};
Ajilchin ::Ajilchin()
{
    name = new char[10];
    albanTushaal = new char[10];
    dugaar = 1;
    strcpy(name, "Bold");
    strcpy(albanTushaal, "ajilchin");
    ajilsanTsag = 3;
    k++;
}
Ajilchin::Ajilchin(int id, char *ner, char *position, float worktime)
{
    name = new char[strlen(ner) + 1];
    albanTushaal = new char[strlen(position) + 1];
    dugaar = id;
    strcpy(name, ner);
    strcpy(albanTushaal, position);
    ajilsanTsag = worktime;
    // k++;
}
Ajilchin ::~Ajilchin()
{
    delete name;
    delete albanTushaal;
    // cout << k << " dugaar objectiig ustgalaa\n";
    k--;
    // cout << "name = " << name << "\n"; //delete ajillaj baigaag shalgaj bna
}

void Ajilchin ::set_dugaar(int x)
{
    dugaar = x;
}
void Ajilchin ::set_name(char *x)
{
    strcpy(name, x);
}
void Ajilchin ::set_albanTushaal(char *x)
{
    strcpy(albanTushaal, x);
}
void Ajilchin ::set_ajilsanTsag(int x)
{
    ajilsanTsag = x;
}
int Ajilchin ::get_dugaar()
{
    return dugaar;
}
char *Ajilchin::get_name()
{
    return name;
}
char *Ajilchin::get_albanTushaal()
{
    return albanTushaal;
}
float Ajilchin::get_ajilsanTsag()
{
    return ajilsanTsag;
}
void Ajilchin::idAvah()
{
    cout << "id = ";
    cin >> dugaar;
    ids[p] = get_dugaar();
    p++;
}
void Ajilchin ::Utgaavah()
{
    cout << "Ner = ";
    cin >> name;
    set_name(name);
    cout << "Alban Tushaal : ";
    cin >> albanTushaal;
    set_albanTushaal(albanTushaal);
    cout << "Ajilsan tsag = ";
    cin >> ajilsanTsag;
    set_ajilsanTsag(ajilsanTsag);
}
void heading()
{
    cout << setw(5) << "\nid";
    cout << setw(15) << "Ner";
    cout << setw(15) << "AlbanTushaal";
    cout << setw(15) << "Ajilsan tsag";
    cout << setw(10) << "Tsalin\n";
    cout << "\n";
}
float Ajilchin::tsalinBoddoh()
{
    int salary = 5000, Tsalin = 0, zahiralMon;
    zahiralMon = strcmp(albanTushaal, "zahiral");
    if (zahiralMon != 0)
    {
        Tsalin = ajilsanTsag * salary;
    }
    else
    {
        Tsalin = ajilsanTsag * salary + ZahiralTsalin();
    }
    return Tsalin;
}
void Ajilchin::Print()
{
    cout << setw(2) << get_dugaar();
    cout << setw(15) << get_name();
    cout << setw(15) << get_albanTushaal();
    cout << setw(15) << get_ajilsanTsag();
    cout << setw(10) << tsalinBoddoh() << "\n";
}
// int checkID(Ajilchin *a[], int num)
// {
//     if (num == 0)
//     {
//         return 0;
//     }
//     for (int i = 0; i <= num; i++)
//     {
//         if (a[num]->get_dugaar() == a[i]->get_dugaar())
//             return 1;
//         else
//             return 0;
//     }
// }
void swap(Ajilchin *a, Ajilchin *b)
{
    int id;
    char *name = new char[20];
    char *pos = new char[10];
    float wtime;

    id = a->get_dugaar();
    strcpy(name, a->get_name());
    strcpy(pos, a->get_albanTushaal());
    wtime = a->get_ajilsanTsag();

    a->set_dugaar(b->get_dugaar());
    a->set_name(b->get_name());
    a->set_albanTushaal(b->get_albanTushaal());
    a->set_ajilsanTsag(b->get_ajilsanTsag());

    b->set_dugaar(id);
    b->set_name(name);
    b->set_albanTushaal(pos);
    b->set_ajilsanTsag(wtime);
}
float Ajilchin ::ZahiralTsalin()
{
    int dsal = 7000, salary;
    salary = ajilsanTsag * dsal;
    return salary;
}
float Ajilchin ::Tsagnemeh()
{
    ajilsanTsag++;
    if (ajilsanTsag > 0 && ajilsanTsag < 24)
    {
        return 1;
    }
    else
        return 0;
}
int main()
{
    int n = 0;
    cout << "Heden ajiltnii tsalin bodoh ve ? = ";
    cin >> n;
    Ajilchin *ajil[n];
    int chID = 0;
    // ajil->print();
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << "-r ajilchnii medeelel\n";
        ajil[i] = new Ajilchin;
        while (1)
        {
            ajil[i]->idAvah();
            for (int j = 0; j < i; j++)
            {
                if (ajil[i]->get_dugaar() == ajil[j]->get_dugaar())
                {
                    cout << "\n"
                         << "DAVHARDSAN ID !!! " << i + 1 << "-r ajiltnii id -g dahin oruulna uu";
                    chID = 1;
                    break;
                }
                else
                {
                    chID = 0;
                }
            }
            if (chID == 0)
            {
                break;
            }

            // ajil[i]->idAvah();
            // chID = checkID(ajil, i);
            // cout << "hahahha = " << chID << "\n"
            //      << "hohoho i = " << i << "\n";
            // if (chID == 1)
            // {
            //     cout << "\n"
            //          << "DAVHARDSAN ID !!! " << i + 1 << "ajiltnii id -g dahin oruulna uu = ";
            //     // chID = checkID(ajil, i);
            // }
            // else
            //     break;
        }
        ajil[i]->Utgaavah();
    }
    heading();
    for (int i = 0; i < n; i++)
        ajil[i]->Print();
    heading();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (strcmp(ajil[j]->get_name(), ajil[j + 1]->get_name()) > 0)
            {
                swap(ajil[j], ajil[j + 1]);
            }
        }
    }
    for (int i = 0; i < n; i++)
        ajil[i]->Print();
    cout << "\n";
}
