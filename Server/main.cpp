#include "interface.h"

#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TInterface interface;

    return a.exec();
}
