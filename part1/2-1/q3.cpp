#include <iostream>
using namespace std;

void SwapPinter(int *p1, int *p2)
{
    int *item = p1;
    p1 = p2;
    p2 = item;
}

int main()
{
    int num1 = 5;
    int *ptr1 = &num1;
    int num2 = 10;
    int *ptr2 = &num2;
    SwapPinter(ptr1, ptr2);
    cout << *ptr1 << endl;
    cout << *ptr2 << endl;


    return 0;
}