/********************************************************************************
** Form generated from reading UI file 'synthlauncher.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYNTHLAUNCHER_H
#define UI_SYNTHLAUNCHER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SynthLauncher
{
public:
    QWidget *centralwidget;
    QPushButton *launchButton;

    void setupUi(QMainWindow *SynthLauncher)
    {
        if (SynthLauncher->objectName().isEmpty())
            SynthLauncher->setObjectName(QString::fromUtf8("SynthLauncher"));
        SynthLauncher->resize(1054, 600);
        SynthLauncher->setStyleSheet(QString::fromUtf8("background-color: rgb(30, 30, 30); color: white;"));
        centralwidget = new QWidget(SynthLauncher);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        launchButton = new QPushButton(centralwidget);
        launchButton->setObjectName(QString::fromUtf8("launchButton"));
        launchButton->setGeometry(QRect(450, 500, 150, 50));
        launchButton->setStyleSheet(QString::fromUtf8("\n"
"       QPushButton {\n"
"           background-color: rgb(0, 204, 102); /* Green color */\n"
"           color: white;\n"
"           font-size: 16px;\n"
"           font-weight: bold;\n"
"           border-radius: 4px; /* Less rounded corners */\n"
"           padding: 10px;\n"
"       }\n"
"       QPushButton:hover {\n"
"           background-color: rgb(0, 230, 115); /* Lighter green for hover effect */\n"
"       }\n"
"       QPushButton:pressed {\n"
"           background-color: rgb(0, 180, 90); /* Darker green for pressed effect */\n"
"       }\n"
"      "));
        SynthLauncher->setCentralWidget(centralwidget);

        retranslateUi(SynthLauncher);

        QMetaObject::connectSlotsByName(SynthLauncher);
    } // setupUi

    void retranslateUi(QMainWindow *SynthLauncher)
    {
        SynthLauncher->setWindowTitle(QCoreApplication::translate("SynthLauncher", "SynthLauncher", nullptr));
        launchButton->setText(QCoreApplication::translate("SynthLauncher", "Launch", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SynthLauncher: public Ui_SynthLauncher {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYNTHLAUNCHER_H
