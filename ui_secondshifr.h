/********************************************************************************
** Form generated from reading UI file 'secondshifr.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECONDSHIFR_H
#define UI_SECONDSHIFR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_SecondShifr
{
public:
    QLabel *label;
    QTextEdit *textEdit_1;
    QTextEdit *textEdit_2;
    QLabel *label_1;
    QPushButton *pushButton_3;
    QPushButton *pushButton_About;
    QLabel *label_3;
    QPushButton *pushButton_4;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_1;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_3;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton_5;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QFrame *line_1;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;
    QFrame *line_5;
    QFrame *line;
    QFrame *line_6;
    QLabel *label_4;
    QLineEdit *lineEdit_2;
    QLabel *label_5;
    QToolButton *toolButton;

    void setupUi(QDialog *SecondShifr)
    {
        if (SecondShifr->objectName().isEmpty())
            SecondShifr->setObjectName(QStringLiteral("SecondShifr"));
        SecondShifr->resize(820, 455);
        SecondShifr->setAutoFillBackground(false);
        SecondShifr->setStyleSheet(QLatin1String("border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(9, 41, 4, 255), stop:0.085 rgba(2, 79, 0, 255), stop:0.19 rgba(50, 147, 22, 255), stop:0.275 rgba(236, 191, 49, 255), stop:0.39 rgba(243, 61, 34, 255), stop:0.555 rgba(135, 81, 60, 255), stop:0.667 rgba(121, 75, 255, 255), stop:0.825 rgba(164, 255, 244, 255), stop:0.885 rgba(104, 222, 71, 255), stop:1 rgba(93, 128, 0, 255));\n"
"position: absolute;"));
        label = new QLabel(SecondShifr);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(205, 0, 1500, 1500));
        label->setStyleSheet(QStringLiteral("background-image: url(:/recource/images/raduga1.jpg);"));
        textEdit_1 = new QTextEdit(SecondShifr);
        textEdit_1->setObjectName(QStringLiteral("textEdit_1"));
        textEdit_1->setGeometry(QRect(280, 40, 210, 320));
        QFont font;
        font.setPointSize(9);
        textEdit_1->setFont(font);
        textEdit_2 = new QTextEdit(SecondShifr);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(500, 40, 210, 320));
        textEdit_2->setFont(font);
        label_1 = new QLabel(SecondShifr);
        label_1->setObjectName(QStringLiteral("label_1"));
        label_1->setGeometry(QRect(280, 10, 210, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Segoe UI"));
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setItalic(true);
        font1.setWeight(50);
        label_1->setFont(font1);
        label_1->setStyleSheet(QLatin1String("background-color: rgba(127, 255, 0, 1);\n"
"color: rgba(255, 79, 0, 1);"));
        label_1->setAlignment(Qt::AlignCenter);
        pushButton_3 = new QPushButton(SecondShifr);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setEnabled(true);
        pushButton_3->setGeometry(QRect(745, 400, 71, 51));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setFamily(QStringLiteral("Goudy Stout"));
        font2.setPointSize(9);
        font2.setBold(true);
        font2.setItalic(true);
        font2.setWeight(75);
        pushButton_3->setFont(font2);
        pushButton_3->setStyleSheet(QLatin1String("QPushButton {\n"
"	float: right;\n"
"	margin-right: 3%;\n"
"	margin-top: 5px;\n"
"	border-radius: 5px;\n"
"	padding: 5px 9px;\n"
"	font-size: 1.2em;\n"
"	background-color: rgba(255, 36, 0, 1);\n"
"	border-bottom: 4px solid rgba(255, 36, 72, 1);\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	background-color: rgba(255, 15, 0, 1);\n"
"	border-bottom: 4px solid rgba(217, 55, 60, 1);\n"
"}"));
        pushButton_About = new QPushButton(SecondShifr);
        pushButton_About->setObjectName(QStringLiteral("pushButton_About"));
        pushButton_About->setEnabled(true);
        pushButton_About->setGeometry(QRect(750, 5, 61, 34));
        sizePolicy.setHeightForWidth(pushButton_About->sizePolicy().hasHeightForWidth());
        pushButton_About->setSizePolicy(sizePolicy);
        QFont font3;
        font3.setPointSize(10);
        font3.setBold(true);
        font3.setWeight(75);
        pushButton_About->setFont(font3);
        pushButton_About->setStyleSheet(QLatin1String("QPushButton {\n"
"float: right;\n"
"margin-right: 3%;\n"
"margin-top: 5px;\n"
"border-radius: 5px;\n"
"padding: 5px 9px;\n"
"font-size: 1.2em;\n"
"background-color: rgba(63, 213, 75, 1);\n"
"border-bottom: 4px solid rgba(63, 213, 40, 1);\n"
"color: white;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"background-color: rgba(63, 230, 75, 1);\n"
"border-bottom: 4px solid rgba(63, 200, 5, 1);\n"
"}\n"
""));
        label_3 = new QLabel(SecondShifr);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(500, 10, 210, 31));
        label_3->setFont(font1);
        label_3->setStyleSheet(QLatin1String("background-color: rgba(127, 255, 0, 1);\n"
"color: rgba(255, 79, 0, 1);"));
        label_3->setAlignment(Qt::AlignCenter);
        pushButton_4 = new QPushButton(SecondShifr);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setEnabled(true);
        pushButton_4->setGeometry(QRect(230, 50, 33, 33));
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        QFont font4;
        font4.setFamily(QStringLiteral("Papyrus"));
        font4.setPointSize(14);
        font4.setBold(true);
        font4.setItalic(false);
        font4.setWeight(75);
        pushButton_4->setFont(font4);
        pushButton_4->setStyleSheet(QLatin1String("QPushButton{\n"
"float: right;\n"
"margin-right: 3%;\n"
"margin-top: 5px;\n"
"border-radius: 5px;\n"
"padding: 5px 9px;\n"
"font-size: 1.2em;\n"
"background-color: rgba(100, 149, 237, 1);\n"
"border-bottom: 4px solid rgba(0, 47, 140, 1);\n"
"color: white;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"color:  white;\n"
"font-style: italic;\n"
"background-color: rgba(100, 165, 220, 1);;\n"
"}"));
        radioButton_2 = new QRadioButton(SecondShifr);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(20, 135, 160, 35));
        QFont font5;
        font5.setFamily(QStringLiteral("Vrinda"));
        font5.setPointSize(11);
        font5.setBold(true);
        font5.setWeight(75);
        radioButton_2->setFont(font5);
        radioButton_2->setStyleSheet(QLatin1String("QRadioButton{\n"
"background-color: rgba(100, 238, 238 ,1);\n"
"color: grey;\n"
"}\n"
"QRadioButton:hover{\n"
"background-color: rgba(50, 220, 255 ,1);\n"
"}"));
        radioButton_1 = new QRadioButton(SecondShifr);
        radioButton_1->setObjectName(QStringLiteral("radioButton_1"));
        radioButton_1->setGeometry(QRect(20, 46, 160, 37));
        QFont font6;
        font6.setFamily(QStringLiteral("Segoe Print"));
        font6.setPointSize(12);
        font6.setBold(true);
        font6.setItalic(true);
        font6.setWeight(75);
        radioButton_1->setFont(font6);
        radioButton_1->setStyleSheet(QLatin1String("QRadioButton {\n"
"background-color: rgba(255, 240, 0 ,1);\n"
"color: rgba(255, 79, 0, 1);\n"
"}\n"
"QRadioButton:hover {\n"
"background-color:  rgba(255, 250, 10 ,1);\n"
"}"));
        radioButton_4 = new QRadioButton(SecondShifr);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));
        radioButton_4->setGeometry(QRect(20, 244, 160, 46));
        QFont font7;
        font7.setFamily(QStringLiteral("Century Gothic"));
        font7.setPointSize(11);
        font7.setBold(true);
        font7.setItalic(false);
        font7.setWeight(75);
        radioButton_4->setFont(font7);
        radioButton_4->setStyleSheet(QLatin1String("QRadioButton{\n"
"color: yellow;\n"
"background-color: rgba(255, 70, 192, 1);\n"
"}\n"
"QRadioButton:hover{\n"
"background-color: rgba(255, 70, 160, 1);\n"
"}"));
        radioButton_3 = new QRadioButton(SecondShifr);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setGeometry(QRect(20, 184, 160, 46));
        radioButton_3->setFont(font5);
        radioButton_3->setStyleSheet(QLatin1String("QRadioButton{\n"
"background-color: black;\n"
"color: white;\n"
"}\n"
"QRadioButton:hover{\n"
"background-color: white;\n"
"color: black;\n"
"}"));
        label_2 = new QLabel(SecondShifr);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 87, 84, 30));
        QFont font8;
        font8.setFamily(QStringLiteral("Perpetua Titling MT"));
        font8.setPointSize(9);
        font8.setBold(true);
        font8.setItalic(true);
        font8.setWeight(75);
        label_2->setFont(font8);
        label_2->setStyleSheet(QLatin1String("background-color: rgba(255, 240, 0 ,1);\n"
"color: rgba(255, 79, 0, 1);"));
        lineEdit = new QLineEdit(SecondShifr);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(107, 90, 74, 26));
        lineEdit->setFont(font8);
        lineEdit->setStyleSheet(QLatin1String("QLineEdit {\n"
"background-color: rgba(255, 240, 0 ,1);\n"
"color: rgba(255, 79, 0, 1);\n"
"}\n"
"QLineEdit:hover {\n"
"background-color: rgba(255, 250, 10 ,1);\n"
"}"));
        pushButton_5 = new QPushButton(SecondShifr);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(230, 130, 33, 33));
        QFont font9;
        font9.setFamily(QStringLiteral("Papyrus"));
        font9.setPointSize(14);
        font9.setBold(true);
        font9.setWeight(75);
        pushButton_5->setFont(font9);
        pushButton_5->setStyleSheet(QLatin1String("QPushButton{\n"
"float: right;\n"
"margin-right: 3%;\n"
"margin-top: 5px;\n"
"border-radius: 5px;\n"
"padding: 5px 9px;\n"
"font-size: 1.2em;\n"
"background-color: rgba(100, 149, 237, 1);\n"
"border-bottom: 4px solid rgba(0, 47, 140, 1);\n"
"color: white;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"color:  white;\n"
"font-style: italic;\n"
"background-color: rgba(100, 165, 220, 1);;\n"
"}"));
        pushButton_1 = new QPushButton(SecondShifr);
        pushButton_1->setObjectName(QStringLiteral("pushButton_1"));
        pushButton_1->setGeometry(QRect(280, 362, 103, 41));
        pushButton_1->setStyleSheet(QLatin1String("QPushButton{\n"
"float: right;\n"
"margin-right: 3%;\n"
"margin-top: 5px;\n"
"border-radius: 5px;\n"
"padding: 5px 9px;\n"
"font: DotumChe;\n"
"font-weight: bold;\n"
"font-size: 9pt;\n"
"background-color: rgba(255, 165, 0, 1);\n"
"color: white;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	/*background-color: rgba(40, 255, 1, 1);*/\n"
"color:  rgba(40, 255, 75, 1);\n"
"font: MS Reference Sans Serif;\n"
"font-size: 1.2em;\n"
"font-weight: bold;\n"
"font-style: italic;\n"
"background-color: rgba(255, 155, 0, 1);\n"
"}"));
        pushButton_2 = new QPushButton(SecondShifr);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(383, 362, 110, 41));
        QFont font10;
        font10.setFamily(QStringLiteral("MS Reference Sans Serif"));
        font10.setBold(true);
        font10.setItalic(true);
        font10.setWeight(75);
        pushButton_2->setFont(font10);
        pushButton_2->setStyleSheet(QLatin1String("QPushButton {\n"
"float: right;\n"
"margin-right: 3%;\n"
"margin-top: 5px;\n"
"border-radius: 5px;\n"
"padding: 5px 9px;\n"
"font-size: 1.2em;\n"
"background-color: rgba(255, 79, 0, 1);\n"
"color: white;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	background-color: rgba(242, 243, 244, 1);\n"
"color: black;\n"
"}"));
        pushButton_6 = new QPushButton(SecondShifr);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(230, 190, 33, 33));
        pushButton_6->setFont(font9);
        pushButton_6->setStyleSheet(QLatin1String("QPushButton{\n"
"float: right;\n"
"margin-right: 3%;\n"
"margin-top: 5px;\n"
"border-radius: 5px;\n"
"padding: 5px 9px;\n"
"font-size: 1.2em;\n"
"background-color: rgba(100, 149, 237, 1);\n"
"border-bottom: 4px solid rgba(0, 47, 140, 1);\n"
"color: white;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"color:  white;\n"
"font-style: italic;\n"
"background-color: rgba(100, 165, 220, 1);;\n"
"}"));
        pushButton_7 = new QPushButton(SecondShifr);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(230, 250, 33, 33));
        pushButton_7->setFont(font9);
        pushButton_7->setStyleSheet(QLatin1String("QPushButton{\n"
"float: right;\n"
"margin-right: 3%;\n"
"margin-top: 5px;\n"
"border-radius: 5px;\n"
"padding: 5px 9px;\n"
"font-size: 1.2em;\n"
"background-color: rgba(100, 149, 237, 1);\n"
"border-bottom: 4px solid rgba(0, 47, 140, 1);\n"
"color: white;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"color:  white;\n"
"font-style: italic;\n"
"background-color: rgba(100, 165, 220, 1);;\n"
"}"));
        line_1 = new QFrame(SecondShifr);
        line_1->setObjectName(QStringLiteral("line_1"));
        line_1->setGeometry(QRect(20, 120, 160, 16));
        line_1->setStyleSheet(QLatin1String("border-radius: 1px;\n"
"background-color: rgba(63, 213, 75, 1);"));
        line_1->setFrameShape(QFrame::HLine);
        line_1->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(SecondShifr);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(20, 170, 160, 16));
        line_2->setStyleSheet(QLatin1String("border-radius: 1px;\n"
"background-color: rgba(63, 213, 75, 1);"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(SecondShifr);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(20, 230, 160, 16));
        line_3->setStyleSheet(QLatin1String("border-radius: 1px;\n"
"background-color: rgba(63, 213, 75, 1);"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(SecondShifr);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(20, 36, 160, 10));
        line_4->setStyleSheet(QLatin1String("border-radius: 1px;\n"
"background-color: rgba(63, 213, 75, 1);"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        line_5 = new QFrame(SecondShifr);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setGeometry(QRect(20, 340, 160, 10));
        line_5->setStyleSheet(QLatin1String("border-radius: 1px;\n"
"background-color: rgba(63, 213, 75, 1);"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        line = new QFrame(SecondShifr);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(10, 36, 10, 314));
        line->setStyleSheet(QLatin1String("border-bottom-left-radius: 5px;\n"
"background-color: rgba(63, 213, 75, 1);"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        line_6 = new QFrame(SecondShifr);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setGeometry(QRect(180, 36, 10, 314));
        line_6->setStyleSheet(QLatin1String("border-bottom-right-radius: 5px;\n"
"background-color: rgba(63, 213, 75, 1);"));
        line_6->setFrameShape(QFrame::VLine);
        line_6->setFrameShadow(QFrame::Sunken);
        label_4 = new QLabel(SecondShifr);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 11, 180, 25));
        QFont font11;
        font11.setFamily(QStringLiteral("Segoe UI"));
        font11.setPointSize(11);
        font11.setBold(true);
        font11.setItalic(true);
        font11.setWeight(75);
        label_4->setFont(font11);
        label_4->setStyleSheet(QLatin1String("border-top-left-radius: 10px;\n"
"border-top-right-radius: 10px;\n"
"background-color: rgba(127, 255, 0, 1);\n"
"color: rgba(255, 79, 0, 1);"));
        label_4->setAlignment(Qt::AlignCenter);
        lineEdit_2 = new QLineEdit(SecondShifr);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(20, 315, 160, 25));
        QFont font12;
        font12.setFamily(QStringLiteral("Perpetua Titling MT"));
        font12.setPointSize(9);
        font12.setBold(true);
        font12.setItalic(false);
        font12.setWeight(75);
        lineEdit_2->setFont(font12);
        lineEdit_2->setStyleSheet(QLatin1String("QLineEdit {\n"
"background-color: rgba(255, 1, 255 ,1);\n"
"color: white;\n"
"}\n"
"QLineEdit:hover {\n"
"background-color: rgba(255, 70, 255 ,1);\n"
"}"));
        label_5 = new QLabel(SecondShifr);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 290, 160, 25));
        QFont font13;
        font13.setFamily(QStringLiteral("Segoe UI"));
        font13.setPointSize(9);
        font13.setBold(true);
        font13.setWeight(75);
        label_5->setFont(font13);
        label_5->setStyleSheet(QLatin1String("color: white;\n"
"background-color: rgba(200, 0, 200, 1 );"));
        label_5->setAlignment(Qt::AlignCenter);
        toolButton = new QToolButton(SecondShifr);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        toolButton->setGeometry(QRect(-270, 210, 25, 19));
        radioButton_2->raise();
        radioButton_1->raise();
        radioButton_4->raise();
        radioButton_3->raise();
        label_2->raise();
        lineEdit->raise();
        label->raise();
        textEdit_1->raise();
        textEdit_2->raise();
        pushButton_4->raise();
        label_1->raise();
        pushButton_3->raise();
        pushButton_About->raise();
        label_3->raise();
        pushButton_5->raise();
        pushButton_1->raise();
        pushButton_2->raise();
        pushButton_6->raise();
        pushButton_7->raise();
        line_1->raise();
        line_2->raise();
        line_3->raise();
        line_4->raise();
        line_5->raise();
        line->raise();
        line_6->raise();
        label_4->raise();
        lineEdit_2->raise();
        label_5->raise();
        toolButton->raise();

        retranslateUi(SecondShifr);

        QMetaObject::connectSlotsByName(SecondShifr);
    } // setupUi

    void retranslateUi(QDialog *SecondShifr)
    {
        SecondShifr->setWindowTitle(QApplication::translate("SecondShifr", "\320\224\320\276\320\261\321\200\320\276 \320\277\320\276\320\266\320\260\320\273\320\276\320\262\320\260\321\202\321\214 \320\262 \321\201\320\272\321\200\321\213\321\202\321\213\320\271 \320\250\320\270\321\204\321\200. \320\237\321\200\320\270\320\273\320\276\320\266\320\265\320\275\320\270\320\265 \320\277\320\276 \321\210\320\270\321\204\321\200\320\276\320\262\320\272\320\265 \320\277\320\265\321\200\320\265\320\264\320\260\320\262\320\260\320\265\320\274\320\276\320\271 \320\270 \320\264\320\265\321\210\320\270\321\204\321\200\320\276\320\262\320\272\320\265 \320\277\320\276\320\273\321\203\321\207\320\260\320\265\320\274\320\276\320\271 \320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\320\270", 0));
        label->setText(QString());
        label_1->setText(QApplication::translate("SecondShifr", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\202\320\265\320\272\321\201\321\202", 0));
        pushButton_3->setText(QApplication::translate("SecondShifr", "\320\222\321\213\321\205\320\276\320\264", 0));
        pushButton_About->setText(QApplication::translate("SecondShifr", "Qt", 0));
        label_3->setText(QApplication::translate("SecondShifr", "\320\237\320\276\320\273\321\203\321\207\320\265\320\275\320\275\321\213\320\271 \321\202\320\265\320\272\321\201\321\202", 0));
        pushButton_4->setText(QApplication::translate("SecondShifr", "?", 0));
        radioButton_2->setText(QApplication::translate("SecondShifr", "\320\242\320\265\320\272\321\201\321\202 \320\262 \320\221\320\270\321\202\321\213", 0));
        radioButton_1->setText(QApplication::translate("SecondShifr", "\320\250\320\270\321\204\321\200 \320\246\320\265\320\267\320\260\321\200\321\217", 0));
        radioButton_4->setText(QApplication::translate("SecondShifr", "\320\250\320\270\321\204\321\200 \320\222\320\270\320\266\320\265\320\275\320\265\321\200\320\260", 0));
        radioButton_3->setText(QApplication::translate("SecondShifr", "\320\221\320\270\321\202\321\213 \320\262 \320\242\320\265\320\272\321\201\321\202", 0));
        label_2->setText(QApplication::translate("SecondShifr", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\210\320\260\320\263:", 0));
        pushButton_5->setText(QApplication::translate("SecondShifr", "?", 0));
        pushButton_1->setText(QApplication::translate("SecondShifr", "\320\250\320\270\321\204\321\200\320\276\320\262\320\272\320\260", 0));
        pushButton_2->setText(QApplication::translate("SecondShifr", "\320\224\320\265\321\210\320\270\321\204\321\200\320\276\320\262\320\272\320\260", 0));
        pushButton_6->setText(QApplication::translate("SecondShifr", "?", 0));
        pushButton_7->setText(QApplication::translate("SecondShifr", "?", 0));
        label_4->setText(QApplication::translate("SecondShifr", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\250\320\270\321\204\321\200", 0));
        label_5->setText(QApplication::translate("SecondShifr", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\272\320\273\321\216\321\207:", 0));
        toolButton->setText(QApplication::translate("SecondShifr", "...", 0));
    } // retranslateUi

};

namespace Ui {
    class SecondShifr: public Ui_SecondShifr {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDSHIFR_H
