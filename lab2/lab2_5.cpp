#include <iostream>
using namespace std;
void changeValue( int *p1, int *p2){
    int x , y;
    y = *p2;
    *p2 = *p1;
    *p1 = y;
}
int main()
{
    int a = 5, b = 3;
    int *ptr1 = &a;
    int *ptr2 = &b;
    cout<<a<<" ," << b<< "\n";
    changeValue(ptr1, ptr2);
    cout<<a<<" ," << b<< "\n";
}