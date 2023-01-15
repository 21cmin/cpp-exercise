#ifndef __PRINTER_H__
#define __PRINTER_H__

class Printer
{
private:
    char text[50];
public:
    void SetString(const char* temp);
    void ShowString();
};

#endif