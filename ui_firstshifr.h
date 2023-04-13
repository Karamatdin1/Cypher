/********************************************************************************
** Form generated from reading UI file 'firstshifr.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIRSTSHIFR_H
#define UI_FIRSTSHIFR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FirstShifr
{
public:
    QAction *action;
    QWidget *centralWidget;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QMenu *menu;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *FirstShifr)
    {
        if (FirstShifr->objectName().isEmpty())
            FirstShifr->setObjectName(QStringLiteral("FirstShifr"));
        FirstShifr->resize(500, 350);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(FirstShifr->sizePolicy().hasHeightForWidth());
        FirstShifr->setSizePolicy(sizePolicy);
        action = new QAction(FirstShifr);
        action->setObjectName(QStringLiteral("action"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/recource/images/blueexit.png"), QSize(), QIcon::Normal, QIcon::Off);
        action->setIcon(icon);
        centralWidget = new QWidget(FirstShifr);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setEnabled(true);
        pushButton->setGeometry(QRect(90, 170, 20, 20));
        pushButton->setAutoDefault(true);
        pushButton->setFlat(true);
        FirstShifr->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(FirstShifr);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 500, 21));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        FirstShifr->setMenuBar(menuBar);
        statusBar = new QStatusBar(FirstShifr);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        FirstShifr->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menu->addAction(action);

        retranslateUi(FirstShifr);

        pushButton->setDefault(true);


        QMetaObject::connectSlotsByName(FirstShifr);
    } // setupUi

    void retranslateUi(QMainWindow *FirstShifr)
    {
        FirstShifr->setWindowTitle(QApplication::translate("FirstShifr", "\320\236\320\272\320\275\320\276", 0));
        action->setText(QApplication::translate("FirstShifr", "\320\222\321\213\321\205\320\276\320\264", 0));
        pushButton->setText(QString());
        menu->setTitle(QApplication::translate("FirstShifr", "\320\234\320\265\320\275\321\216", 0));
    } // retranslateUi

};

namespace Ui {
    class FirstShifr: public Ui_FirstShifr {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIRSTSHIFR_H
