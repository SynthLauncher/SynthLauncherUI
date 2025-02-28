#include "synthlauncher.h"
#include "ui_synthlauncher.h"

SynthLauncher::SynthLauncher(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::SynthLauncher)
{
    ui->setupUi(this);
}

SynthLauncher::~SynthLauncher()
{
    delete ui;
}
