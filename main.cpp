#include "interface.h"

#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TInterface interface;
    interface.show();
    return a.exec();
}
