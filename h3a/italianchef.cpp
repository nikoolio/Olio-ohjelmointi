#include "italianchef.h"
#include <iostream>

ItalianChef::ItalianChef(std::string n):Chef(n)
{
    std::cout << "Italian Chef " << this->name << " konstruktori " << std::endl;
}
void ItalianChef::makePasta()
{
    std::cout << "Italian Chef " << this->getName() << " makes pasta." << std::endl;
}
std::string ItalianChef::getName()
{
    return this->name;
}