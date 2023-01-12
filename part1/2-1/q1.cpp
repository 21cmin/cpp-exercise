#include <iostream>
using namespace std;

void Plus(int &num)
{
    num += 1;
}
int main()
{
    int a = 0;
    for (int i = 0; i < 10; i++)
        Plus(a);
    cout << a << endl;
    return 0;
}