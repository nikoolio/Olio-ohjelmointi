#ifndef CHEF_H
#define CHEF_H
#include <iostream>

class Chef
{
public:
    Chef(std::string);
    void makeSalad();
    void makeSoup();
    ~Chef();
protected:
    std::string name;
};

#endif // CHEF_H
