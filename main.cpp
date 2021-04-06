#include "modelviewdialog.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ModelViewDialog w;
    w.show();
    return a.exec();
}
