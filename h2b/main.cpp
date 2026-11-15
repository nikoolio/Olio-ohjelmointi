#include <iostream>
#include <vector>
#include "car.h"

int main()
{
    std::vector<Car> carList;
    carList.emplace_back("Audi", "A2", 2009);
    carList.emplace_back("Toyota", "Auris", 2016);
    carList.emplace_back("Opel", "Zafira", 2003);

    std::cout << " Listan 2. olion tidot"<< std::endl;
    carList[1].printData();
    std::cout << std::endl;

    std::cout << "Kaikkien olioiden tiedot:" << std::endl;

    for(int i = 0; i < carList.size(); i++)
    {
        carList[i].printData();
        std::cout << std::endl;
    }

    return 0;
}
