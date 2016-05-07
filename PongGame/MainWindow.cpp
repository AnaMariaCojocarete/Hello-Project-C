#include <QPainter>
#include <QDebug>
#include "MainWindow.h"
#include "Racket.h"
#include "Table.h"
#include "Ball.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ball(BALL_START_X, BALL_START_Y, BALL_SIZE, BALL_SIZE, BALL_SPEED_X, BALL_SPEED_Y)
    , leftRacket(LEFT_RACKET_START_X, LEFT_RACKET_START_Y, LEFT_RACKET_WIDTH, LEFT_RACKET_HEIGHT)
    , rightRacket(RIGHT_RACKET_START_X, RIGHT_RACKET_START_Y, RIGHT_RACKET_WIDTH, RIGHT_RACKET_HEIGHT)

{
    resize(WINDOW_WIDTH, WINDOW_HEIGHT);
    timerId = startTimer(3);
}

void MainWindow::paintEvent(QPaintEvent *e) {

    Q_UNUSED(e);

    doPainting();
}

void MainWindow::timerEvent(QTimerEvent *)
{
    moveBall();
    repaint();
}

void MainWindow::doPainting() {
    QPainter painter(this);

    Table table(WINDOW_WIDTH, WINDOW_HEIGHT);

    painter.setPen(Qt::black);
    painter.setBrush(QBrush(Qt::black));
    painter.drawRect(0, 0, table.width, table.height);

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
    ball.positionX += ball.directionX;
    if ((ball.positionX >= WINDOW_WIDTH) || (ball.positionX <= 0))
    {
        ball.directionX *= -1;
    }

    ball.positionY += ball.directionY;
    if ((ball.positionY >= WINDOW_HEIGHT) || (ball.positionY <=0))
    {
        ball.directionY *= -1;
    }

    if ((ball.positionX <= leftRacket.positionX + LEFT_RACKET_WIDTH) && (ball.positionY > leftRacket.positionY) &&
            (ball.positionY < (leftRacket.positionY + leftRacket.height)))
    {
        ball.directionX *= -1;
        ball.directionY *= -1;
    }

//    qDebug() << "ball.positionY " << ball.positionY;
//    qDebug() << "ball.positionX " << ball.positionX;
//    qDebug() << "rightRacket.positionY " << rightRacket.positionY;
//    qDebug() << "rightRacket.positionX " << rightRacket.positionX;

    if ((ball.positionX >= rightRacket.positionX) && (ball.positionY > rightRacket.positionY) &&
            (ball.positionY < (rightRacket.positionY + leftRacket.height)))
    {
        // qDebug() << "inside if";
        ball.directionX *= -1;
        ball.directionY *= -1;
    }
}

void MainWindow::moveRackets(int key)
{
    if (key == Qt::Key_Q)
    {
        leftRacket.positionY -= 50;
        if (leftRacket.positionY <= 0)
        {
            leftRacket.positionY = 1;
        }
    }

    if (key == Qt::Key_A)
    {
        leftRacket.positionY += 50;
        if (leftRacket.positionY >= (WINDOW_HEIGHT - LEFT_RACKET_HEIGHT))
        {
            leftRacket.positionY = (WINDOW_HEIGHT - LEFT_RACKET_HEIGHT);
        }
    }

    if (key == Qt::Key_Up)
    {
        rightRacket.positionY -= 50;
        if (rightRacket.positionY <= 0)
        {
            rightRacket.positionY = 1;
        }
    }

    if (key == Qt::Key_Down)
    {
        rightRacket.positionY += 50;
        if (rightRacket.positionY >= (WINDOW_HEIGHT - RIGHT_RACKET_HEIGHT))
        {
            rightRacket.positionY = (WINDOW_HEIGHT - RIGHT_RACKET_HEIGHT);
        }
    }
}

void MainWindow::keyPressEvent(QKeyEvent *e)
{
    int key = e->key();
    moveRackets(key);

    QWidget::keyPressEvent(e);
    repaint();
}


