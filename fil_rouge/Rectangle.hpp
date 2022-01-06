#ifndef RECT_H
#define RECT_H

#include <iostream>

class Rectangle
{
    int x;
    int y;
    int w;
    int h;

    public:
    Rectangle(int = 0, int = 0, int = 0, int = 0);
    std::string toString();
};

#endif