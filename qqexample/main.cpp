#include "qqexample.h"
#include <QtWidgets/QApplication>
#include "Drawer.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qqexample w;
    w.show();
    Drawer d;
    d.show();
    return a.exec();
}
