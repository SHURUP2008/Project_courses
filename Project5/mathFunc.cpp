#include "mathFunc.h"
#include <iostream>

int factorial(int n)
{
    if (n < 0)
    {
        return -1;
    }
    if (n == 1 || n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

float divAtoB(float a, float b)
{
    return a / b;
}

bool isPositive(int n)
{
    return (n > 0 ? true :false);
}

std::string reverseStr(std::string str)
{
    std::reverse(str.begin(), str.end());
    return str;
}
