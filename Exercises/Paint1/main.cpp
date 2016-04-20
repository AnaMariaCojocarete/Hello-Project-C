#include <QApplication>
#include "Dialog.h"

int main(int argc, char *argv[]) {

  QApplication app(argc, argv);

  Colours window;

  window.resize(1300, 815);
  window.setWindowTitle("Colours");
  window.show();

  return app.exec();
}
