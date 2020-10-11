#include <iostream>
using namespace std;
void changeValue( int &, int &);
int main()
{
    int a = 431, b = 123;
    cout<<a<<" ," << b<< "\n";
    changeValue(a, b);
    cout<<a<<" ," << b<< "\n";
}
void changeValue( int &a_ref , int &b_ref){
    int k;
    k = a_ref;
    a_ref = b_ref;
    b_ref = k;
}