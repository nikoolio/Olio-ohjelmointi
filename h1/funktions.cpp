#include "functions.h"
#include <iostream>

void calcSum(int a, int b)
{
    std::cout << "Lukujen " << a << " ja " << b << "summa on " << a+b <<std::endl;
}

void calcDiv(int a, int b)
{


    if (b == 0)
    {
        std::cout << "Jakaja ei saa olla nolla!";
    }
    else
    {
        std::cout << "Lukujen " << a << " ja " << b << "osamaara on " << a/b <<std::endl;
    }
}