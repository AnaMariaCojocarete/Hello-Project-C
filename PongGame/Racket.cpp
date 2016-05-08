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
