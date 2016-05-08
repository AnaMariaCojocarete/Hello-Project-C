#include "Racket.h"

Racket::Racket(int positionX, int positionY, int width, int height)
    : positionX(positionX)
    , positionY(positionY)
    , width(width)
    , height(height)
{}

void Racket::draw(QPainter &painter)
{
    painter.setPen(Qt::red);
    painter.setBrush(QBrush(Qt::red));
    painter.drawRect(positionX, positionY, width, height);
}

void Racket::moveUp()
{
    positionY -= RACKET_SPEED;
    if (positionY <= 0)
    {
        positionY = 1;
    }
}

void Racket::moveDown(int windowHeight)
{
    positionY += RACKET_SPEED;
    if (positionY >= (windowHeight - RACKET_HEIGHT))
    {
        positionY = (windowHeight - RACKET_HEIGHT);
    }
}
