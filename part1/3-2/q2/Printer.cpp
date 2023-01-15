#include <iostream>
#include <cstring>
#include "Printer.h"

void Printer::SetString(const char* temp)
{
    strcpy(text, temp);
}

void Printer::ShowString()
{
    using namespace std;
    cout << text << endl;
}