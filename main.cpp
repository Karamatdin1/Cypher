#include "firstshifr.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    FirstShifr w;
    w.show();

    return a.exec();
}
