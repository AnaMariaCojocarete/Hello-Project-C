#ifndef TABLE_H
#define TABLE_H

#include <QPainter>

class Table
{
public:
    Table(int width, int height);
    void draw(QPainter& painter, int leftScore, int rightScore);

    static const int FONT_SIZE = 50;
    static const int LEFT_SCORE_X = 300;
    static const int LEFT_SCORE_Y = 50;
    static const int RIGHT_SCORE_X = 680;
    static const int RIGHT_SCORE_Y = 50;

    int width;
    int height;
};

#endif // TABLE_H
