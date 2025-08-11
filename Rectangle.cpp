//
// Created by Macbook M1 Pro 16 on 8/11/25.
//

#include "Rectangle.h"

#include "Circle.h"
Rectangle::Rectangle()
{
    width = 1;
    height = 1;
}
Rectangle::Rectangle(double width, double height)
{
    setWidth(width);
    setHeight(height);
}


void Rectangle::setWidth(double w)
{
    if (w > 0 && w < 20)
    {
        width=w;
    }
}
void Rectangle::setHeight(double h)
{
    if (h > 0 && h < 20)
    {
        height=h;
    }
}
double Rectangle::getWidth()
{
    return width;
}
double Rectangle::getHeight()
{
    return height;
}
double Rectangle::getArea()
{
    return width*height;
}
double Rectangle::getPerimeter()
{
    return 2*(width+height);
}
