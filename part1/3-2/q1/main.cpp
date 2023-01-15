#include "Calculator.h"
#include <iostream>

int main()
{
    using namespace std;
    Calculator cal;
    cal.Init();
    cout << "3.2 + 2.4 = " << cal.Add(3.2, 2.4) << endl;
    cal.ShowOpCount();
    return 0;
}