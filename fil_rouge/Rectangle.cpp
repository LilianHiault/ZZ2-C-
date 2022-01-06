#include "Rectangle.hpp"
#include <iostream>
#include <sstream>

Rectangle::Rectangle(int i, int j, int k, int l):x(i), y(j), h(k), w(l)
{}

std::string Rectangle::toString()
{
    std::stringstream ss;
    ss << "Rectangle " << x << ":" << y << " " << w << ";" << h;
    return ss.str();
}