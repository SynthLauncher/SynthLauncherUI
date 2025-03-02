/*
	SynthLauncher UI

	Module name:
		main.cpp

	Description:
		Simply launch the QT Application

	Author: KapTheGuy
*/

#include "synthlauncher.h"

#include <QApplication>

int main(int argc, char *argv[])
{
	printf("SynthLauncher is loading...\n");
    QApplication a(argc, argv);
    SynthLauncher w;
    w.show();
    return a.exec();
}
