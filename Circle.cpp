//
// Created by Macbook M1 Pro 16 on 8/11/25.
//

#include "Circle.h"
double Circle::getRadius()
{
    return radius;
}
void Circle::setRadius(double r)
{
    if (r>0)
    {
        radius=r;
    }

}
    Circle::Circle(double r)
    {
        radius = r;
    }

    double Circle::area()
    {
        return 3.14*radius*radius;
    }
    double Circle::perimeter()
    {
        return 2*(3.14*radius);
    }