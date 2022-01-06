#include <iostream>
#include "Point.hpp"

int Point::compteur = 0;

Point::Point(int i, int j):x(i), y(j)
{
    ++compteur;
}

int Point::getX()
{
    return x;
}

void Point::setX(int x)
{
    this->x = x;
}

int Point::getY()
{
    return y;
}

void Point::setY(int y)
{
    this->y = y;
}

void Point::deplacerDe(int i, int j)
{
    x += i;
    y += j;
}

void Point::deplacerVers(int i, int j)
{
    x = i;
    y = j;
}

int Point::getCompteur()
{
    return compteur;
}