#include <QPainter>
#include "Dialog.h"

Colours::Colours(QWidget *parent)
    : QWidget(parent)
{ }

void Colours::paintEvent(QPaintEvent *e) {

    Q_UNUSED(e);

    doPainting();
}

void Colours::doPainting() {

    QPainter painter(this);
    painter.setPen(QColor("#000000"));
    painter.setBrush(QBrush("#000000"));
    painter.drawRect(1, 1, 1300, 815);
    painter.setBrush(QBrush("#ffffff"));
    painter.drawRect(6, 3, 1288, 10);
    painter.setBrush(QBrush("#ffffff"));
    painter.drawRect(6, 801,  1288, 10);
    painter.setBrush(QBrush("#ffffff"));
    painter.drawRect(638, 33, 12, 12);
    painter.setBrush(QBrush("#ffffff"));
    painter.drawRect(638, 64, 12, 12);
    painter.setBrush(QBrush("#ffffff"));
    painter.drawRect(638, 95, 12, 12);
    painter.setBrush(QBrush("#ffffff"));
    painter.drawRect(638, 126, 12, 12);
    painter.setBrush(QBrush("#ffffff"));
    painter.drawRect(638, 157, 12, 12);
    painter.setBrush(QBrush("#ffffff"));
    painter.drawRect(638, 188, 12, 12);
    painter.setBrush(QBrush("#ffffff"));
    painter.drawRect(638, 219, 12, 12);
    painter.setBrush(QBrush("#ffffff"));
    painter.drawRect(638, 250, 12, 12);
    painter.setBrush(QBrush("#ffffff"));
    painter.drawRect(638, 281, 12, 12);
    painter.setBrush(QBrush("#ffffff"));
    painter.drawRect(638, 312, 12, 12);
    painter.setBrush(QBrush("#ffffff"));
    painter.drawRect(638, 343, 12, 12);
    painter.setBrush(QBrush("#ffffff"));
    painter.drawRect(638, 374, 12, 12);
    painter.setBrush(QBrush("#ffffff"));
    painter.drawRect(638, 405, 12, 12);
    painter.setBrush(QBrush("#ffffff"));
    painter.drawRect(638, 436, 12, 12);
    painter.setBrush(QBrush("#ffffff"));
    painter.drawRect(638, 467, 12, 12);
    painter.setBrush(QBrush("#ffffff"));
    painter.drawRect(638, 498, 12, 12);
    painter.setBrush(QBrush("#ffffff"));
    painter.drawRect(638, 529, 12, 12);
    painter.setBrush(QBrush("#ffffff"));
    painter.drawRect(638, 560, 12, 12);
    painter.setBrush(QBrush("#ffffff"));
    painter.drawRect(638, 591, 12, 12);
    painter.setBrush(QBrush("#ffffff"));
    painter.drawRect(638, 622, 12, 12);
    painter.setBrush(QBrush("#ffffff"));
    painter.drawRect(638, 653, 12, 12);
    painter.setBrush(QBrush("#ffffff"));
    painter.drawRect(638, 684, 12, 12);
    painter.setBrush(QBrush("#ffffff"));
    painter.drawRect(638, 715, 12, 12);
    painter.setBrush(QBrush("#ffffff"));
    painter.drawRect(638, 746, 12, 12);
    painter.setBrush(QBrush("#ffffff"));
    painter.drawRect(638, 777, 12, 12);
    painter.setBrush(QBrush("#ffffff"));
    painter.setPen(QColor("#ffffff"));
    painter.drawRect(535, 33, 12, 105);
    painter.setBrush(QBrush("#ffffff"));
    painter.drawRect(500, 78, 35, 12);
    painter.setBrush(QBrush("#ffffff"));
    painter.drawRect(488, 33, 12, 57);
    painter.setBrush(QBrush("#ffffff"));
    painter.drawRect(745, 33, 59, 12);
    painter.setBrush(QBrush("#ffffff"));
    painter.drawRect(792, 45, 12, 33);
    painter.setBrush(QBrush("#ffffff"));
    painter.drawRect(745, 78, 59, 12);
    painter.setBrush(QBrush("#ffffff"));
    painter.drawRect(745, 90, 12, 33);
    painter.setBrush(QBrush("#ffffff"));
    painter.drawRect(745, 123, 57, 12);
    painter.setBrush(QBrush("#ffffff"));
    painter.setPen(QColor("#000000"));
    painter.drawRect(20, 225, 12, 105);
    painter.setBrush(QBrush("#ffffff"));
    painter.drawRect(1268, 570, 12, 105);
    painter.setPen(QColor("#000000"));
    painter.setBrush(QBrush("#303030"));
    painter.drawRect(1269, 675, 10, 15);
    painter.setBrush(QBrush("#120D16"));
    painter.drawRect(1270, 690, 8, 14);
    painter.setBrush(QBrush("#120D16"));
    painter.drawRect(1082, 543, 12, 12);
    painter.setBrush(QBrush("#303030"));
    painter.drawRect(1088, 537, 12, 12);
    painter.setBrush(QBrush("#606060"));
    painter.drawRect(1094, 531, 12, 12);
    painter.setBrush(QBrush("#ffffff"));
    painter.drawRect(1100, 525, 12, 12);
}
