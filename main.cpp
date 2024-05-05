#include "src/game.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Game g;
    g.setWindowTitle("MainWindow");
    g.show();

    return a.exec();
}
