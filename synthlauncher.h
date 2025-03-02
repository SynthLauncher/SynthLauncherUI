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
    explicit SynthLauncher(QWidget *parent = nullptr);
    ~SynthLauncher();

private slots:
    void onLaunchButtonClicked(); // Slot for the Launch button

private:
    Ui::SynthLauncher *ui;
};

#endif // SYNTHLAUNCHER_H
