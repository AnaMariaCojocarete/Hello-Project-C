#include <QPainter>
#include "MainWindow.h"
#include "ui_MainWindow.h"
#include "Racket.h"
#include "Table.h"
#include "Ball.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , ball(BALL_START_X, BALL_START_Y, BALL_SIZE, BALL_SIZE)
{
    ui->setupUi(this);
    resize(WINDOW_WIDTH, WINDOW_HEIGHT);
    timerId = startTimer(3);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::paintEvent(QPaintEvent *e) {

    Q_UNUSED(e);

    doPainting();
}

void MainWindow::timerEvent(QTimerEvent *e)
{
    moveBall();
    repaint();
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

    painter.setPen(Qt::green);
    painter.setBrush(QBrush(Qt::green));
    painter.drawRect(ball.positionX, ball.positionY, ball.width, ball.height);
}

void MainWindow::moveBall()
{
    ball.positionX += directionX;
    if ((ball.positionX >= WINDOW_WIDTH) || (ball.positionX <= 0))
    {
        directionX *= -1;
    }

    ball.positionY += directionY;
    if ((ball.positionY >= WINDOW_HEIGHT) || (ball.positionY <=0))
    {
        directionY *= -1;
    }
}

