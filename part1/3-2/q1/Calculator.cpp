#include <iostream>
#include "Calculator.h"

void Calculator::Init()
{
    numOfAdd = 0;
    numOfMinus = 0;
    numOfMultiply = 0;
    numOfDivide = 0;
}

double Calculator::Add(double num1, double num2)
{
    numOfAdd++;
    return num1 + num2;
}

double Calculator::Minus(double num1, double num2)
{
    numOfMinus++;
    return num1 - num2;
}

double Calculator::Divide(double num1, double num2)
{
    numOfDivide++;
    return num1 / num2;
}

void Calculator::ShowOpCount()
{
    printf("plus: %d minus: %d multiply: %d divide: %d\n", numOfAdd, numOfMinus, numOfMultiply, numOfDivide);
}
