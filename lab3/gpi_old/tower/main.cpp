#include "tower.hpp"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    tower w;
    w.show();
    return a.exec();
}
