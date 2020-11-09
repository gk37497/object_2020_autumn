#include <iostream>
using namespace std;
class ehClass
{
private:
    int a;

protected:
    int b;

public:
    int c;
    ehClass()
    {
        a = 5;
        b = 4;
        c = 3;
    };
    void getdata()
    {
        cout << a << b << c;
    }
};
class huuhedClass : protected ehClass
{
public:
    void childGetData(){};
};
int main()
{
    huuhedClass *a;
    a = new huuhedClass;
    a->childGetData();
    a->getdata; //private gorimoor udamshsan tul public tuvshintei baisn getdata() functioniig duudan ajilluulj bolohgui
}
