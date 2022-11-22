#include "pilotageLumiere.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    pilotageLumiere w;
    w.show();
    return a.exec();
}
