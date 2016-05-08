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

    painter.setPen(Qt::white);
    painter.setBrush(QBrush(Qt::white));
    painter.drawRect(490, 0, 20, 800);

    QFont font("Score", FONT_SIZE, QFont::DemiBold);
    painter.setFont(font);
    painter.setPen(Qt::white);

    QString message = QString::number(leftScore);
    painter.drawText(LEFT_SCORE_X, LEFT_SCORE_Y, message);

    message = QString::number(rightScore);
    painter.drawText(RIGHT_SCORE_X, RIGHT_SCORE_Y, message);
}
