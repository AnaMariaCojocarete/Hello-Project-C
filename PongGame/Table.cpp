#include "Table.h"

Table::Table(int width, int height)
    : width(width)
    , height(height)
{}

void Table::draw(QPainter &painter, int leftScore, int rightScore)
{
    painter.setPen(Qt::black);
    painter.setBrush(QBrush(Qt::black));
    painter.drawRect(0, 0, width, height);

    QString message = "1";
    QFont font("Score", 15, QFont::DemiBold);
    QFontMetrics fm(font);
    int textWidth = fm.width(message);


    painter.setFont(font);

//    painter.translate(QPoint(300/2, 500/2));
    painter.setBrush(QBrush(Qt::white));
    painter.drawText(-textWidth/2, 0, message);

}
