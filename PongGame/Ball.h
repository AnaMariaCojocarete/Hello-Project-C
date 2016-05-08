#ifndef BALL_H
#define BALL_H

#include "Racket.h"

class Ball
{
public:
    Ball(int positionX, int positionY, int width, int height, int speedX, int speedY);
    void move(int windowWidth, int windowHeight, int leftRacketWidth,
              const Racket& leftRacket, const Racket &rightRacket);
    void draw(QPainter &painter);

    int positionX;
    int positionY;
    int width;
    int height;
    int directionX;
    int directionY;
};
#endif // BALL_H
