#include "rectangle.h"
#include <iostream>

Rectangle::Rectangle() {}
Rectangle::Rectangle(double w, double h)
{
    width = w;
    height = h;
}
double Rectangle::getArea()
{
    return width*height;
}
double Rectangle::getCircum()
{
    return 2*width + 2*height;
}
void Rectangle::setWidth(double w)
{
    width = w;
}

void Rectangle::setHeight(double h)
{
    height = h;
}
Rectangle::~Rectangle()
{
    std::cout << "Rectangle-olio tuhottu..." << std::endl;
}