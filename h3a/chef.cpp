#include <iostream>
#include "chef.h"

Chef::Chef(std::string n)
{
    this->name = n;
    std::cout << "Chef " << this->name << " konstruktori"<<std::endl;
}

void Chef::makeSalad()
{
    std::cout << "Chef" << this->name << " makes salad."<<std::endl;
}

void Chef::makeSoup()
{
    std::cout << "Chef " << this->name << " makes soup." << std::endl;
}

Chef::~Chef()
{
    std::cout << "Chef " << this->name << " destruktori"<<std::endl;
}