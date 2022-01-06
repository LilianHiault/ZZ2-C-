#include "Cercle.hpp"
#include <iostream>
#include <sstream>

Cercle::Cercle(int i, int j, int k, int l):x(i), y(j), h(k), w(l)
{}

Cercle::Cercle(int i, int j, int r):Cercle(i - r, j - r, r * 2, r * 2)
{}

std::string Cercle::toString()
{
    std::stringstream ss;
    ss << "Cercle " << x << ":" << y << " " << w << ";" << h;
    return ss.str();
}