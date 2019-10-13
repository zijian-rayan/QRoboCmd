#include "qrobocmd.h"
#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QRoboCmd w/*,w2*/;
    w.show();
    //w2.show();
    return a.exec();
}
