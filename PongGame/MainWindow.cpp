#include <QPainter>
#include "MainWindow.h"
#include "ui_MainWindow.h"
#include "Racket.h"
#include "Table.h"
#include "Ball.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    resize(1000, 800);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::paintEvent(QPaintEvent *e) {

    Q_UNUSED(e);

    doPainting();
}

void MainWindow::doPainting() {
    QPainter painter(this);

    Table table(1000, 800);

    painter.setPen(Qt::black);
    painter.setBrush(QBrush(Qt::black));
    painter.drawRect(0, 0, table.width, table.height);

    Racket leftRacket(100, 100, 20, 70);
    Racket rightRacket(800, 100, 20, 70);

    painter.setPen(Qt::red);
    painter.setBrush(QBrush(Qt::red));
    painter.drawRect(leftRacket.positionX, leftRacket.positionY, leftRacket.width, leftRacket.height);
    painter.drawRect(rightRacket.positionX, rightRacket.positionY, rightRacket.width, rightRacket.height);

    Ball ball(350, 135, 15, 15);

    painter.setPen(Qt::green);
    painter.setBrush(QBrush(Qt::green));
    painter.drawRect(ball.positionX, ball.positionY, ball.width, ball.height);
}

