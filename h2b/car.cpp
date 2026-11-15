#include "car.h"
#include <iostream>
using std::string;

Car::Car(string b, string m, int y) {
    this->brand = b;
    this->model = m;
    this->yearModel=y;
}

void Car::printData() {
    std::cout << "Merkki: " << brand << std::endl;
    std::cout << "Malli: " << model << std::endl;
    std::cout << "Vuosimalli: " << yearModel << std:: endl;
}