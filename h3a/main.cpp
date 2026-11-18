#include <iostream>
#include "chef.h"
#include "italianchef.h"
using namespace std;

int main()
{
    Chef anotherChef("Gordon Ramsay");
    anotherChef.makeSalad();
    anotherChef.makeSoup();

    ItalianChef italianChef("Anthony Bourdain");
    italianChef.makeSalad();
    italianChef.makeSoup();

    std::cout << "Name of the Italian Chef is " << italianChef.getName() << std::endl;

    return 0;
}
