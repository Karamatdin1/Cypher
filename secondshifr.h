#ifndef SECONDSHIFR_H
#define SECONDSHIFR_H

#include <QDialog>
using namespace std;

namespace Ui {
class SecondShifr;
}

class SecondShifr : public QDialog
{
    Q_OBJECT

public:
    explicit SecondShifr(QWidget *parent = 0);
    ~SecondShifr();

private slots:
    void on_pushButton_1_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_About_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_2_clicked();

public:
    Ui::SecondShifr *ui;
};

#endif // SECONDSHIFR_H
