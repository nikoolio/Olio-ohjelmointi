#include "car.h"
#include <iostream>

Car::Car() {}
void Car::setBrand(std::string s)
{
    brand=s;
}
void Car::setModel(std::string m)
{
    model = m;
}
void Car::setYearModel(int y)
{
    yearModel = y;
}
void Car::printData()
{
    std::cout << "Merkki: " << brand << std::endl;
    std::cout << "Malli: " << model << std::endl;
    std::cout << "Vuosimalli: " << yearModel << std::endl;
}
Car::~Car()
{
    std::cout << "Car-luokan olio tuhottiin..."<<std::endl;
}