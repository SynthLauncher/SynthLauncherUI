#ifndef SYNTHLAUNCHER_H
#define SYNTHLAUNCHER_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class SynthLauncher;
}
QT_END_NAMESPACE

class SynthLauncher : public QMainWindow
{
    Q_OBJECT

public:
    SynthLauncher(QWidget *parent = nullptr);
    ~SynthLauncher();

private:
    Ui::SynthLauncher *ui;
};
#endif // SYNTHLAUNCHER_H
