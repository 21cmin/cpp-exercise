#ifndef __CALCULATOR_H__
#define __CALCULATOR_H__

class Calculator
{
private:
    int numOfAdd, numOfMinus, numOfMultiply, numOfDivide;
public:
    void Init();
    double Add(double num1, double num2);
    double Minus(double num1, double num2);
    double Divide(double num1, double num2);
    void ShowOpCount();
};

#endif