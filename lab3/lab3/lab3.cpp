#include <iostream>
#include <string.h>
#include <cstring>
using namespace std;
class Ajilchin
{
private:
    int dugaar;
    char *name;
    char *albanTushaal;
    float ajilsanTsag;

public:
    // Ajilchin(int);
    // Ajilchin();
    void GaraaniiUtga();
    void Utgaavah();
    void Print();
    float tsalinBoddoh();
    float ZahiralTsalin();
    float Tsagnemeh();
};
// Ajilchin : Ajilchin(/* args */)
// {
// }
// Ajilchin::Ajilchin()
// {
// }
void Ajilchin::GaraaniiUtga()
{
    name = new char[20];
    albanTushaal = new char[10];
    dugaar = 0;
    strcpy(name, "");
    strcpy(albanTushaal, "ajilchin");
    ajilsanTsag = 0;
}
void Ajilchin ::Utgaavah()
{
    cout << "id = ";
    cin >> dugaar;
    cout << "Name = ";
    cin >> name;
    cout << "ALban Tushaal : ";
    cin >> albanTushaal;
    cout << "Ajilsan tsag = ";
    cin >> ajilsanTsag;
    cout << "\n";
}
void Ajilchin::Print()
{
    cout << "Achilchnii ner : " << name << "\n";
    cout << "dugaar : " << dugaar << "\n";
    cout << "Alban tushaal : " << albanTushaal << "\n";
    cout << "Ajilsan tsag  : " << ajilsanTsag << "\n";
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
    Ajilchin ajil;
    ajil.GaraaniiUtga();
    ajil.Utgaavah();
    ajil.Print();
    ajil.Tsagnemeh();
    cout << "Niit Tsalin = " << ajil.tsalinBoddoh() << "\n";
}
