#ifndef POINT_H

#define POINT_H

class Point
{
    int x;
    int y;
    static int compteur;

public:
    Point(int = 0, int = 0);

    int getX();
    void setX(int);
    int getY();
    void setY(int);

    void deplacerDe(int, int);
    void deplacerVers(int, int);

    static int getCompteur();
};

#endif