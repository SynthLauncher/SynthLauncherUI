/*
	SynthLauncher UI

	Module name:
		synthlauncher.cpp

	Description:
		The actual QT application

	Author: KapTheGuy
*/

#include "synthlauncher.h"
#include "ui_synthlauncher.h"

#include "synthlauncher.h"
#include "ui_synthlauncher.h"
#include <QMessageBox>

SynthLauncher::SynthLauncher(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::SynthLauncher)
{
    ui->setupUi(this);

    // Connect the Launch button to its slot
    connect(ui->launchButton, &QPushButton::clicked, this, &SynthLauncher::onLaunchButtonClicked);
}

SynthLauncher::~SynthLauncher()
{
    delete ui;
}

void SynthLauncher::onLaunchButtonClicked()
{
    QMessageBox::information(this, "Launch? kys", "Launch doesn't work yet, so go fuck yourself.");
}
