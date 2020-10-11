#include <iostream>
#include <string.h>
#include <cstring>
using namespace std;
int k = 0;
class Ajilchin
{

private:
    int dugaar;
    char name[20];
    char albanTushaal[10];
    float ajlsanTsag;
    float zahirliinTsalin();

public:
    Ajilchin(int id, char n[], char position[], int worktime)
    {
        dugaar = id;
        strncpy(name, n, 20);
        strncpy(albanTushaal, position, 10);
        ajlsanTsag = worktime;
        k++;
    }
    void UtgaAvah();
    void delgetsendHevleh();
    float tsalinBodoh();
    float tsagNemeh();
    void heading();
    ~Ajilchin()
    {
        cout << "\nUstgagch function "
             << "ajil" << k << " object deer ajilla\n";
        k--;
    }
};

void Ajilchin::UtgaAvah()
{
    cout << "Ajilchnii Dugaar : ";
    cin >> dugaar;
    cout << "Ner : ";
    cin >> name;
    cout << "Alban tushaal : ";
    cin >> albanTushaal;
    cout << "Ajilsan tsag :";
    cin >> ajlsanTsag;
}
void Ajilchin::delgetsendHevleh()
{
    cout << "Ajilchnii dugaar : ";
    cout << dugaar << "   ";
    cout << "Ner : ";
    cout << name << "   ";
    cout << "Albantushaal : ";
    cout << albanTushaal << "   ";
    cout << "Ajilsan Tsag  : ";
    cout << ajlsanTsag << "\n";
}
float Ajilchin::tsalinBodoh()
{
    int tsagiinTsalin = 5000, tsalin = 0, zahiralMon;
    zahiralMon = strcmp(albanTushaal, "zahiral");
    if (zahiralMon == 0)
    {
        tsalin = ajlsanTsag * tsagiinTsalin + zahirliinTsalin();
    }
    else
    {
        tsalin = ajlsanTsag * tsagiinTsalin;
    }
    return tsalin;
}
float Ajilchin::zahirliinTsalin()
{
    int zahiralTsagiinTsalin = 10000, salary = 0;
    salary = ajlsanTsag * zahiralTsagiinTsalin;
    return salary;
}
float Ajilchin::tsagNemeh()
{
    ajlsanTsag++;
    if (ajlsanTsag > 0 && ajlsanTsag < 24)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    Ajilchin ajil[3] = {
        Ajilchin(100, "Bat", "ajilchin", 10),
        Ajilchin(100, "Bold", "ajilchin", 10),
        Ajilchin(100, "Ankhaa", "ajilchin", 10),
    };
    for (int i = 0; i < 3; i++)
    {
        ajil[i].UtgaAvah();
        ajil[i].tsagNemeh();
        cout << "Niit tsalin  = " << ajil[i].tsalinBodoh() << "\n";
    }
    for (int i = 0; i < 3; i++)
    {
        ajil[i].delgetsendHevleh();
    }
}