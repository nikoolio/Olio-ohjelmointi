#ifndef CAR_H
#define CAR_H
#include <iostream>

class Car
{
public:
    Car(std::string, std::string, int);
    void printData();

private:
    std::string brand;
    std::string model;
    int yearModel;
};

#endif // CAR_H
