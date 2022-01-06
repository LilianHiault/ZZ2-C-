#include <iostream>
#include "Point.hpp"

int main(int, char **)
{
    std::cout << Point::getCompteur() << std::endl;
    Point p1{};
    Point p2{2};
    Point p3{-1, 5};
    Point * p4 = new Point{2, 9};
    std::cout << p2.getCompteur() << std::endl;

    std::cout << p1.getX() << ":" << p1.getY() << std::endl;
    std::cout << p2.getX() << ":" << p2.getY() << std::endl;
    std::cout << p3.getX() << ":" << p3.getY() << std::endl;
    std::cout << p4->getX() << ":" << p4->getY() << std::endl;

    p1.deplacerDe(-2, 3);
    std::cout << p1.getX() << ":" << p1.getY() << std::endl;

    p1.deplacerVers(-5, -3);
    std::cout << p1.getX() << ":" << p1.getY() << std::endl;

    delete p4;

    return 0;
}
