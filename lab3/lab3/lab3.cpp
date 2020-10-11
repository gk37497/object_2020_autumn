#include <iostream>
using namespace std;
class Ajilchin
{

private:
    int dugaar;
    char name[20];
    char albanTushaal[10];
    float ajlsanTsag;

public:
    void garaaniiUtga();
    void UtgaAvah();
    void delgetsendHevleh();
    float tsalinBodoh();
    float zahirliinTsalin();
    float tsagNemeh();
};
void Ajilchin::garaaniiUtga()
{
    dugaar = 0;
    strcmp(name, "");
    strcmp(albanTushaal, "ajilchin");
    ajlsanTsag = 0;
}
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
    Ajilchin ajil;
    ajil.garaaniiUtga();
    ajil.UtgaAvah();
    ajil.delgetsendHevleh();
    ajil.tsagNemeh();
    cout << "Niit tsalin  = " << ajil.tsalinBodoh() << "\n";
}