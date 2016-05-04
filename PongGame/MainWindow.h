#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "Ball.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

protected:
    void paintEvent(QPaintEvent *e);
    void timerEvent(QTimerEvent *e);

private:
    void doPainting();
    void moveBall();

    static const int WINDOW_WIDTH  = 1000;
    static const int WINDOW_HEIGHT = 800;
    static const int BALL_START_X  = 350;
    static const int BALL_START_Y  = 135;
    static const int BALL_SIZE     = 10;

    Ui::MainWindow *ui;
    int timerId;
    Ball ball;
    int directionX = 2;
    int directionY = 2;

};

#endif // MAINWINDOW_H
