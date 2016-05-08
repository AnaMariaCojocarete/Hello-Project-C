#ifndef RACKET_H
#define RACKET_H

#include <QPainter>

class Racket
{
public:
    Racket(int positionX, int positionY, int width, int height);
    void draw(QPainter& painter);
    void moveUp();
    void moveDown(int windowHeight);

    static const int RACKET_SPEED  = 50;
    static const int RACKET_HEIGHT = 70;

    int positionX;
    int positionY;
    int width;
    int height;
};

#endif // RACKET_H
