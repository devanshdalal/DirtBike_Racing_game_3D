/********************************************************************************
** Form generated from reading UI file 'track3.ui'
**
** Created: Sun Sep 8 11:34:39 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRACK3_H
#define UI_TRACK3_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Track3
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label_2;
    QLabel *label;

    void setupUi(QWidget *Track3)
    {
        if (Track3->objectName().isEmpty())
            Track3->setObjectName(QString::fromUtf8("Track3"));
        Track3->resize(1366, 768);
        pushButton = new QPushButton(Track3);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(1090, 560, 181, 91));
        pushButton->setStyleSheet(QString::fromUtf8("border-radius:20px;\n"
"background-color:rgb(72,61,139);\n"
"color:rgb(255,255,255);\n"
"font-size:30px;"));
        pushButton_2 = new QPushButton(Track3);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(1090, 410, 181, 91));
        pushButton_2->setStyleSheet(QString::fromUtf8("border-radius:20px;\n"
"background-color:rgb(72,61,139);\n"
"color:rgb(255,255,255);\n"
"font-size:30px;"));
        pushButton_3 = new QPushButton(Track3);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(1090, 260, 181, 91));
        pushButton_3->setStyleSheet(QString::fromUtf8("border-radius:20px;\n"
"background-color:rgb(72,61,139);\n"
"color:rgb(255,255,255);\n"
"font-size:30px;"));
        label_2 = new QLabel(Track3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 30, 411, 101));
        label = new QLabel(Track3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 1441, 751));
        label->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/dirtbike.jpg")));
        label->setScaledContents(true);
        label->raise();
        pushButton->raise();
        pushButton_2->raise();
        pushButton_3->raise();
        label_2->raise();

        retranslateUi(Track3);

        QMetaObject::connectSlotsByName(Track3);
    } // setupUi

    void retranslateUi(QWidget *Track3)
    {
        Track3->setWindowTitle(QApplication::translate("Track3", "Form", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Track3", "Play Game", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("Track3", "High Scores", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("Track3", "Back", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Track3", "<html><head/><body><p align=\"justify\"><span style=\" font-size:36pt; font-weight:600; color:#330aff;\">TRACK - 3</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Track3: public Ui_Track3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRACK3_H
