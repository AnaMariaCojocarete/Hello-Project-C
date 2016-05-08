#ifndef TABLE_H
#define TABLE_H

#include <QPainter>

class Table
{
public:
    Table(int width, int height);
    void draw(QPainter& painter);

    int width;
    int height;
};

#endif // TABLE_H
