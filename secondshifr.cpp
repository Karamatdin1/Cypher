#include "secondshifr.h"
#include "ui_secondshifr.h"
#include <QMessageBox>
#include <QDebug>
#include <QtGlobal>

#include <iostream>
#include <cstdlib>
#include <ctype.h>
#include <stdio.h>     // для atoi
#include <conio.h>
#include <string>
#include <string.h>
#include <cstring>     // для strcpy
#include <istream>
#include <fstream>     // Для файлов

#include "vigenerencrypt.h"
VigenerEncrypt Vigener;

SecondShifr::SecondShifr(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SecondShifr)
{
    ui->setupUi(this);
}

SecondShifr::~SecondShifr()
{
    delete ui;
}

void SecondShifr::on_pushButton_1_clicked(){                       // Кнопка 'ШИФРОВКА'
    if(ui->radioButton_1->isChecked()){                            // ШИФР ЦЕЗАРЯ

        QString qkey = ui->lineEdit->text();
        string strkey;
        strkey = qkey.toStdString();                               // Qstring в string

        size_t i=0;
        for ( ; i<strkey.size(); i++){
            if(!isdigit(strkey[i])) {
                QMessageBox::warning(this, "Подсказка", "Введите натуральное число");
                break;
            }
        }

        if (i==strkey.size()){
            char charkey[10000];
            int intkey=0;
            for (size_t k = 0; k < strkey.size(); k++){
                charkey[k]=strkey[k];                              // string в char[]
            }
            intkey=atoi(charkey);                                  // char[] в int

            QString text = ui->textEdit_1->toPlainText();
            string strtext;
            strtext = text.toStdString();                          // Qstring в string

            QString qtext;
            for (size_t j = 0; j < strtext.length(); j++){         // size_t - Это unsigned тип int-а
                strtext[j] = (strtext[j] + intkey);
                qtext = QString::fromStdString(strtext);           // string в Qstring
            }

            ui->textEdit_2->setText(qtext);
        }
    }

    else if(ui->radioButton_2->isChecked()){                       // ТЕКСТ В БИТЫ

/*
        QString text = ui->textEdit_1->toPlainText();

        QByteArray arr = text.toLocal8Bit();
        QString plus;

        QString a[0] = QString::number( arr[0], 2 );
        if (text.size()==0){
            if (arr[0]=='\0'){
            QString empty = "Введите текст!\n<-------------";
            ui->textEdit_2->setText(empty);
            }
            else { plus = a0; ui->textEdit_2->setText(plus); }
        }

        for (int i=0; i<strlen(arr[i]); i++){
        QString a[i] = QString::number( arr[i], 2 );
        ui->textEdit_2->setText(a[i]);
        }


*/

        QString text = ui->textEdit_1->toPlainText();

        QByteArray arr = text.toLocal8Bit();
        QString plus;

        QString a0 = QString::number( arr[0], 2 );
        if (text.size()==0){
            if (arr[0]=='\0'){
            QString empty = "Введите текст!\n<-------------";
            ui->textEdit_2->setText(empty);
            }
            else { plus = a0; ui->textEdit_2->setText(plus); }
        }

        QString a1 = QString::number( arr[1], 2 );
        if (text.size()==1){
            if (arr[1]=='\0'){
                plus = a0; ui->textEdit_2->setText(plus);
            }
            else { plus = a0+a1; ui->textEdit_2->setText(plus); }
        }

        QString a2 = QString::number( arr[2], 2 );
        if (text.size()==2){
            if (arr[2]=='\0'){
                plus = a0+a1; ui->textEdit_2->setText(plus);
            }
            else { plus = a0+a1+a2; ui->textEdit_2->setText(plus); }
        }

        QString a3 = QString::number( arr[3], 2 );
        if (text.size()==3){
            if (arr[3]=='\0'){
                plus = a0+a1+a2; ui->textEdit_2->setText(plus);
            }
            else { plus = a0+a1+a2+a3; ui->textEdit_2->setText(plus); }
        }

        QString a4 = QString::number( arr[4], 2 );
        if (text.size()==4){
            if (arr[4]=='\0'){
                plus = a0+a1+a2+a3; ui->textEdit_2->setText(plus);
            }
            else { plus = a0+a1+a2+a3+a4; ui->textEdit_2->setText(plus); }
        }

        QString a5 = QString::number( arr[5], 2 );
        if (text.size()==5){
            if (arr[5]=='\0'){
                plus = a0+a1+a2+a3+a4; ui->textEdit_2->setText(plus);
            }
            else { plus = a0+a1+a2+a3+a4+a5; ui->textEdit_2->setText(plus); }
        }

        QString a6 = QString::number( arr[6], 2 );
        if (text.size()==6){
            if (arr[6]=='\0'){
                plus = a0+a1+a2+a3+a4+a5; ui->textEdit_2->setText(plus);
            }
            else { plus = a0+a1+a2+a3+a4+a5+a6; ui->textEdit_2->setText(plus); }
        }

        QString a7 = QString::number( arr[7], 2 );
        if (text.size()==7){
            if (arr[7]=='\0'){
                plus = a0+a1+a2+a3+a4+a5+a6; ui->textEdit_2->setText(plus);
            }
            else { plus = a0+a1+a2+a3+a4+a5+a6+a7; ui->textEdit_2->setText(plus); }
        }

        QString a8 = QString::number( arr[8], 2 );
        if (text.size()==8){
            if (arr[8]=='\0'){
                plus = a0+a1+a2+a3+a4+a5+a6+a7; ui->textEdit_2->setText(plus);
            }
            else { plus = a0+a1+a2+a3+a4+a5+a6+a7+a8; ui->textEdit_2->setText(plus); }
        }

        QString a9 = QString::number( arr[9], 2 );
        if (text.size()==9){
            if (arr[9]=='\0'){
                plus = a0+a1+a2+a3+a4+a5+a6+a7+a8; ui->textEdit_2->setText(plus);
            }
            else { plus = a0+a1+a2+a3+a4+a5+a6+a7+a8+a9; ui->textEdit_2->setText(plus); }
        }

        QString a10 = QString::number( arr[10], 2 );
        if (text.size()==10){
            if (arr[10]=='\0'){
                plus = a0+a1+a2+a3+a4+a5+a6+a7+a8+a9; ui->textEdit_2->setText(plus);
            }
            else { plus = a0+a1+a2+a3+a4+a5+a6+a7+a8+a9+a10; ui->textEdit_2->setText(plus); }
        }
    }

    else if(ui->radioButton_3->isChecked()){                                       // БИТЫ В ТЕКСТ
        QMessageBox::information(this, "ПОДСКАЗКА", " Воспользуйтесь кнопкой 'Дешифровка' ");
    }

    else if(ui->radioButton_4->isChecked()){                                       // ШИФР ВИЖЕНЕРА
        QString text = ui->textEdit_1->toPlainText();
        QString alphabet = ("ABCDEFGHIJKLMNOPQRSTUVWXYZ");

        QString key = ui->lineEdit_2->text();
        string strkey;
        strkey = key.toStdString();

        size_t i=0;
        for ( ; i<strkey.size(); i++){                    // проверка: является ли это словом, а не числом
            if(isdigit(strkey[i])) {
                QMessageBox::warning(this, "Неправильный ввод", "Введите только латинские буквы в строку для ключа");
                break;
            }
            else {  ui->textEdit_2->setText(Vigener.Encrypt(alphabet,text,key)); }
        }
    }
}

void SecondShifr::on_pushButton_2_clicked(){                       // Кнопка 'ДЕШИФРОВКА'
    if(ui->radioButton_1->isChecked()){                            // ШИФР ЦЕЗАРЯ

        QString qkey = ui->lineEdit->text();
        string strkey;
        strkey = qkey.toStdString();                               // Qstring в string

        size_t i=0;
        for ( ; i<strkey.size(); i++){
            if(!isdigit(strkey[i])) {
                QMessageBox::warning(this, "Ошибка", "Введите натуральное число в строку для шага");
                break;
            }
        }

        if (i==strkey.size()){
            char charkey[10000];
            int intkey=0;
            for (size_t k = 0; k < strkey.size(); k++){
                charkey[k]=strkey[k];                              // string в char[]
            }
            intkey=atoi(charkey);                                  // char[] в int

            QString text = ui->textEdit_1->toPlainText();
            string strtext;
            strtext = text.toStdString();                          // Qstring в string

            QString qtext;
            for (size_t j = 0; j < strtext.length(); j++){         // size_t - Это unsigned тип int-а
                strtext[j] = (strtext[j] - intkey);
                qtext = QString::fromStdString(strtext);           // string в Qstring
            }

            ui->textEdit_2->setText(qtext);
        }
    }

    else if(ui->radioButton_2->isChecked()){
        QMessageBox::information(this, "ПОДСКАЗКА", " Воспользуйтесь кнопкой 'Шифровка' ");
    }

    else if(ui->radioButton_3->isChecked()){                       // Биты в Текст
        QString text = ui->textEdit_1->toPlainText();

        string strtext;
        strtext = text.toStdString();                              // Qstring в string

        ofstream out("D:/Karamatdin/TUIT/4kurs/Diplom/qt/firstshifr/binary1.txt");

        if (out.is_open()){
            out << strtext << endl;
        }

        FILE *f1 = fopen("D:/Karamatdin/TUIT/4kurs/Diplom/qt/firstshifr/binary1.txt","r");
        FILE *f2 = fopen("D:/Karamatdin/TUIT/4kurs/Diplom/qt/firstshifr/binary2.txt","w");

        char c;
        do{
            int ascii = 0;
            int k=128;
            for (int i=0; i<8; i++){
                c = fgetc(f1);
                if (c == '1') { ascii+=k; }
                k/=2;
            }
            fprintf(f2,"%c",(char)ascii);
         }
         while (c!=EOF);

         fclose(f1);
         fclose(f2);

         string strbits;
         ifstream read;
         read.open("D:/Karamatdin/TUIT/4kurs/Diplom/qt/firstshifr/binary2.txt");   // окрываем файл для чтения
                 if (read.is_open()){
                     while (getline(read, strbits)){
                         QString qbits;
                         qbits = QString::fromStdString(strbits);                  // string to Qstring
                         ui->textEdit_2->setText(qbits);
                     }
                 }
         read.close();                                                             // закрываем файл
    }

    else if(ui->radioButton_4->isChecked()){                                       // ШИФР ВИЖЕНЕРА
        QString text = ui->textEdit_1->toPlainText();
        QString alphabet = ("ABCDEFGHIJKLMNOPQRSTUVWXYZ");

        QString key = ui->lineEdit_2->text();
        ui->textEdit_2->setText(Vigener.Decrypt(alphabet,text,key));
    }
}

void SecondShifr::on_pushButton_3_clicked(){
    QMessageBox::StandardButton exit = QMessageBox::question(this, "Завершение", "Хотите выйти?",
                                                             QMessageBox::Yes | QMessageBox::No);
    if (exit==QMessageBox::Yes){
        QApplication::quit();
    }
    else { qDebug() << "Остаюсь в программе"; }                                    // выводиться только на консоль
}

void SecondShifr::on_pushButton_4_clicked(){
    QMessageBox::information(this, "Шифр Цезаря",
        "      Шифр Цезаря, также известный как шифр сдвига, код Цезаря — один из самых простых и наиболее широко известных методов шифрования.\n      "
        "Шифр Цезаря — это вид шифра подстановки, в котором каждый символ в открытом тексте заменяется символом, находящимся на некотором постоянном числе позиций левее или правее него в алфавите.\n      "
        "Например, в шифре со сдвигом вправо на 3, А была бы заменена на D, B станет E, и так далее(англ алфавит).\n      "
        "Шифр назван в честь римского полководца Гая Юлия Цезаря, использовавшего его для секретной переписки со своими генералами. ");
}

void SecondShifr::on_pushButton_5_clicked(){
    QMessageBox::information(this, "Текст в Биты", "      Минимальные единицы измерения информации – это бит и байт.\n"
                                   "      Один бит позволяет закодировать 2 значения (0 или 1).\n"
                                   "      Используя два бита, можно закодировать 4 значения: 00, 01, 10, 11.\n"
                                   "      8 бит кодируют  —>  256 разных значений (2^8 = 256)\n"
                                   "      К примеру, 0 = 00110000; a(англ. яз) = 01100001");
}

void SecondShifr::on_pushButton_6_clicked(){
    QMessageBox::information(this, "Биты в Текст", "      Любая информация внутри компьютера хранится и обрабатывается в виде длинного кода, состоящего всего из двух символов. Этот код называется двоичным или бинарным.\n"
                                                   "      Такой мельчайший элемент, участвующий в формировании бинарного кода, называется битом.\n"
                                                   "      В 8-битной кодировке диапазон кодирования расширен до 256 символов.\n"
                                                   "      Первые 128 символов в таких кодировках, как правило, соответствуют стандарту ASCII. Оставшиеся 128 - реализуют региональные языковые особенности.");
}

void SecondShifr::on_pushButton_7_clicked(){
    QMessageBox::information(this, "Шифр Виженера", "      Шифр Виженера — метод полиалфавитного шифрования буквенного текста с использованием ключевого слова.\n"
                                                    "      Шифр Виженера состоит из последовательности нескольких шифров Цезаря с различными значениями сдвига.\n"
                                                    "      Для зашифровывания может использоваться таблица алфавитов, называемая tabula recta или квадрат (таблица) Виженера.\n"
                                                    "      Применительно к латинскому алфавиту таблица Виженера составляется из строк по 26 символов, причём каждая следующая строка сдвигается на несколько позиций.\n"
                                                    "      Таким образом, в таблице получается 26 различных шифров Цезаря.\n"
                                                    "      На каждом этапе шифрования используются различные алфавиты, выбираемые в зависимости от символа ключевого слова.");
}

void SecondShifr::on_pushButton_About_clicked(){
    QMessageBox::aboutQt(this, "Информация про Qt Creator");
}
