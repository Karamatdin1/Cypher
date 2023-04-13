#ifndef FIRSTSHIFR_H
#define FIRSTSHIFR_H

#include <QMainWindow>
#include "secondshifr.h"

namespace Ui {
class FirstShifr;
}

class FirstShifr : public QMainWindow
{
    Q_OBJECT

public:
    explicit FirstShifr(QWidget *parent = 0);
    ~FirstShifr();

private slots:
    void on_pushButton_clicked();

    void on_action_triggered();

private:
    Ui::FirstShifr *ui;
    SecondShifr *window;
};

#endif // FIRSTSHIFR_H
