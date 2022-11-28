#include "mainwindow.h"
#include "homepage.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    mainwindow w;
    w.show();

    homepage h;
    //h.show();
    return a.exec();
}
