#ifndef RACKET_H
#define RACKET_H

#include <QPainter>

class Racket
{
public:
    Racket(int positionX, int positionY, int width, int height);
    void draw(QPainter& painter);

    int positionX;
    int positionY;
    int width;
    int height;
};

#endif // RACKET_H
