//
// Created by Macbook M1 Pro 16 on 8/11/25.
//

#ifndef RECTANGLE_H
#define RECTANGLE_H



class Rectangle {
private:double width;
private:double height;
    public:Rectangle(double width, double height);
    public:Rectangle();
    public:void setWidth(double w);
    public:void setHeight(double h);
    public:double getWidth();
    public:double getHeight();
    public:double getArea();
    public:double getPerimeter();
};



#endif //RECTANGLE_H
