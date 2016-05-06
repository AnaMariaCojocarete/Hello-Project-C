#include "Ball.h"

Ball::Ball(int positionX, int positionY, int width, int height, int speedX, int speedY)
    : positionX(positionX)
    , positionY(positionY)
    , width(width)
    , height(height)
    , directionX(speedX)
    , directionY(speedY)
{}

