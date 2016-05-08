#include "Table.h"

Table::Table(int width, int height)
    : width(width)
    , height(height)
{}

void Table::draw(QPainter &painter)
{
    painter.setPen(Qt::black);
    painter.setBrush(QBrush(Qt::black));
    painter.drawRect(0, 0, width, height);
}
