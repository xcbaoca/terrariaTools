#include "tItemEditer.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    tItemEditer w;
    w.show();
    return a.exec();
}
