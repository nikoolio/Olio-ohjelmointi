#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include <iostream>
#include "chef.h"

class ItalianChef : public Chef
{
public:
    ItalianChef(std::string);
    std::string getName();
    void makePasta();
};

#endif // ITALIANCHEF_H
