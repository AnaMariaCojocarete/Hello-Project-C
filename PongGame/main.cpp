#include "MainWindow.h"
#include <QApplication>
#include "MyTimer.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    MyTimer timer;

    return a.exec();
}
