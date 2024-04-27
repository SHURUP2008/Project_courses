#include "mathFunc.h"
#include <iostream>

int factorial(int x)
{
    if (x < 0)
    {
        return 1;
    }
    if (x == 1 || x == 0)
    {
        return 1;
    }
    return x * factorial(x - 1);
}

float divAtoB(float a, float b)
{
    return a / b;
}

bool isPositive(int x)
{
    return (x > 0 ? true :false);
}


std::string reverseStr(std::string str)
{
    std::reverse(str.begin(), str.end());
    return str;
}
