#ifndef BALL_H
#define BALL_H

class Ball
{
public:
    Ball(int positionX, int positionY, int width, int height, int speedX, int speedY);

    int positionX;
    int positionY;
    int width;
    int height;
    int directionX;
    int directionY;
};
#endif // BALL_H
