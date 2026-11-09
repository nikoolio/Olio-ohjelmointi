#ifndef CAR_H
#define CAR_H

#include <iostream>

class Car
{
private:
    std::string brand;
    std::string model;
    int yearModel;

public:
    Car();
    void setBrand(std::string);
    void setModel(std::string);
    void setYearModel(int);
    void printData();
    ~Car();
};

#endif // CAR_H