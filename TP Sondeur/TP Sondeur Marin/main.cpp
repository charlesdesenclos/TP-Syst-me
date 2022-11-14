#include "TPSondeurMarin.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TPSondeurMarin w;
    w.show();
    return a.exec();
}
