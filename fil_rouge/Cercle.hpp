#ifndef CERCLE_H
#define CERCLE_H

#include <iostream>

class Cercle
{
    int x;
    int y;
    int w;
    int h;

    public:
    Cercle(int, int, int, int);
    Cercle(int, int, int);
    std::string toString();
};

#endif