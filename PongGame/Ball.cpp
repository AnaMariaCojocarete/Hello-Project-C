#include <QPainter>
#include "Ball.h"

Ball::Ball(int positionX, int positionY, int width, int height, int speedX, int speedY)
    : positionX(positionX)
    , positionY(positionY)
    , width(width)
    , height(height)
    , directionX(speedX)
    , directionY(speedY)
{}

void Ball::move(int windowWidth, int windowHeight, int leftRacketWidth,
                const Racket& leftRacket, const Racket& rightRacket, int& leftScore, int& rightScore)
{
    positionX += directionX;
    if (positionX >= windowWidth)
    {
        ++leftScore;
        positionX = windowWidth / 2;
        directionX *= -1;
    }

    if (positionX <= 0)
    {
        ++rightScore;
        positionX = windowWidth / 2;
        directionX *= -1;
    }

    positionY += directionY;
    if ((positionY >= windowHeight) || (positionY <= 0))
    {
        directionY *= -1;
    }

    if ((positionX <= leftRacket.positionX + leftRacketWidth) && (positionY > leftRacket.positionY) &&
            (positionY < (leftRacket.positionY + leftRacket.height)))
    {
        directionX *= -1;
        directionY *= -1;
    }

//    qDebug() << "ball.positionY " << ball.positionY;
//    qDebug() << "ball.positionX " << ball.positionX;
//    qDebug() << "rightRacket.positionY " << rightRacket.positionY;
//    qDebug() << "rightRacket.positionX " << rightRacket.positionX;

    if ((positionX >= rightRacket.positionX) && (positionY > rightRacket.positionY) &&
            (positionY < (rightRacket.positionY + leftRacket.height)))
    {
        // qDebug() << "inside if";
        directionX *= -1;
        directionY *= -1;
    }
}

void Ball::draw(QPainter& painter)
{
    painter.setPen(Qt::green);
    painter.setBrush(QBrush(Qt::green));
    painter.drawRect(positionX, positionY, width, height);
}

