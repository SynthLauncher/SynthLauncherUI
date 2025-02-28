#include "synthlauncher.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SynthLauncher w;
    w.show();
    return a.exec();
}
