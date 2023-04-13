#include "firstshifr.h"
#include "ui_firstshifr.h"
#include <QPixmap>

FirstShifr::FirstShifr(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FirstShifr)
{
    ui->setupUi(this);

    QPixmap bkgnd(":/recource/images/bluehand.jpg");
        bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
        QPalette palette;
        palette.setBrush(QPalette::Background, bkgnd);
        this->setPalette(palette);

}

FirstShifr::~FirstShifr()
{
    delete ui;
}

void FirstShifr::on_pushButton_clicked()
{
    hide();
    window = new SecondShifr(this);
    window->show();
}

void FirstShifr::on_action_triggered()
{
    QApplication::quit();
}
