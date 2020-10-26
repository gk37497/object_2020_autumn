#include <iostream>
using namespace std;
void talbaiOloh(char, char);
void talbaiOloh(int, int);
int main()
{
    talbaiOloh('a', 'b');
    talbaiOloh(12, 6);
}
void talbaiOloh(char x, char y)
{
    cout << "S=" << x << "*" << y << "\n";
}
void talbaiOloh(int k, int z)
{
    cout << "S=" << k << "*" << z << "\n";
}