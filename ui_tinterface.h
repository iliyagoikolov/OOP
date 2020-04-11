/********************************************************************************
** Form generated from reading UI file 'tinterface.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TINTERFACE_H
#define UI_TINTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TInterface
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QLabel *label_a;
    QLineEdit *lineEdit_a;
    QLabel *label_b;
    QLineEdit *lineEdit_b;
    QLabel *label_1;
    QLabel *label_c;
    QLineEdit *lineEdit_c;
    QLabel *label_2;
    QLabel *label_polinom;
    QLabel *label_3;
    QLabel *label_root2;
    QLabel *label_root1;
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_value;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *lineEdit_x;

    void setupUi(QMainWindow *TInterface)
    {
        if (TInterface->objectName().isEmpty())
            TInterface->setObjectName(QString::fromUtf8("TInterface"));
        TInterface->resize(422, 435);
        TInterface->setMouseTracking(false);
        centralwidget = new QWidget(TInterface);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 230, 111, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(12);
        pushButton->setFont(font);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        label_a = new QLabel(centralwidget);
        label_a->setObjectName(QString::fromUtf8("label_a"));
        label_a->setGeometry(QRect(0, 140, 21, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Times New Roman"));
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setUnderline(false);
        font1.setWeight(50);
        label_a->setFont(font1);
        label_a->setAlignment(Qt::AlignCenter);
        lineEdit_a = new QLineEdit(centralwidget);
        lineEdit_a->setObjectName(QString::fromUtf8("lineEdit_a"));
        lineEdit_a->setGeometry(QRect(20, 140, 113, 21));
        QFont font2;
        font2.setPointSize(12);
        lineEdit_a->setFont(font2);
        label_b = new QLabel(centralwidget);
        label_b->setObjectName(QString::fromUtf8("label_b"));
        label_b->setGeometry(QRect(0, 170, 21, 21));
        label_b->setFont(font);
        label_b->setAlignment(Qt::AlignCenter);
        lineEdit_b = new QLineEdit(centralwidget);
        lineEdit_b->setObjectName(QString::fromUtf8("lineEdit_b"));
        lineEdit_b->setGeometry(QRect(20, 170, 113, 21));
        lineEdit_b->setFont(font2);
        label_1 = new QLabel(centralwidget);
        label_1->setObjectName(QString::fromUtf8("label_1"));
        label_1->setGeometry(QRect(0, 90, 131, 21));
        label_1->setFont(font);
        label_c = new QLabel(centralwidget);
        label_c->setObjectName(QString::fromUtf8("label_c"));
        label_c->setGeometry(QRect(0, 200, 21, 21));
        label_c->setFont(font);
        label_c->setAlignment(Qt::AlignCenter);
        lineEdit_c = new QLineEdit(centralwidget);
        lineEdit_c->setObjectName(QString::fromUtf8("lineEdit_c"));
        lineEdit_c->setGeometry(QRect(20, 200, 113, 21));
        lineEdit_c->setFont(font2);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(150, 110, 101, 21));
        label_2->setFont(font);
        label_polinom = new QLabel(centralwidget);
        label_polinom->setObjectName(QString::fromUtf8("label_polinom"));
        label_polinom->setGeometry(QRect(150, 140, 260, 40));
        label_polinom->setFont(font2);
        label_polinom->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 310, 51, 21));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_root2 = new QLabel(centralwidget);
        label_root2->setObjectName(QString::fromUtf8("label_root2"));
        label_root2->setGeometry(QRect(80, 340, 331, 21));
        label_root2->setFont(font);
        label_root1 = new QLabel(centralwidget);
        label_root1->setObjectName(QString::fromUtf8("label_root1"));
        label_root1->setGeometry(QRect(80, 310, 331, 21));
        label_root1->setFont(font);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 380, 401, 51));
        pushButton_2->setFont(font);
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 20, 141, 16));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Times New Roman"));
        font3.setPointSize(10);
        label->setFont(font3);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 40, 141, 16));
        label_6->setFont(font3);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(0, 110, 81, 21));
        label_7->setFont(font);
        label_value = new QLabel(centralwidget);
        label_value->setObjectName(QString::fromUtf8("label_value"));
        label_value->setGeometry(QRect(150, 250, 260, 40));
        label_value->setFont(font2);
        label_value->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(150, 230, 141, 21));
        label_8->setFont(font);
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(150, 200, 21, 21));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Times New Roman"));
        font4.setPointSize(16);
        label_9->setFont(font4);
        lineEdit_x = new QLineEdit(centralwidget);
        lineEdit_x->setObjectName(QString::fromUtf8("lineEdit_x"));
        lineEdit_x->setGeometry(QRect(180, 200, 113, 21));
        lineEdit_x->setFont(font2);
        TInterface->setCentralWidget(centralwidget);

        retranslateUi(TInterface);

        QMetaObject::connectSlotsByName(TInterface);
    } // setupUi

    void retranslateUi(QMainWindow *TInterface)
    {
        TInterface->setWindowTitle(QCoreApplication::translate("TInterface", "TInterface", nullptr));
        pushButton->setText(QCoreApplication::translate("TInterface", "\320\222\321\213\321\207\320\270\321\201\320\273\320\270\321\202\321\214", nullptr));
        label_a->setText(QCoreApplication::translate("TInterface", "a", nullptr));
        label_b->setText(QCoreApplication::translate("TInterface", "b", nullptr));
        label_1->setText(QCoreApplication::translate("TInterface", "\320\232\320\276\321\215\321\204\321\204\320\270\321\206\320\270\320\265\320\275\321\202\321\213:", nullptr));
        label_c->setText(QCoreApplication::translate("TInterface", "c", nullptr));
        label_2->setText(QCoreApplication::translate("TInterface", "\320\237\320\276\320\273\320\270\320\275\320\276\320\274 P(x):", nullptr));
        label_polinom->setText(QString());
        label_3->setText(QCoreApplication::translate("TInterface", "\320\232\320\276\321\200\320\275\320\270:", nullptr));
        label_root2->setText(QString());
        label_root1->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("TInterface", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        label->setText(QCoreApplication::translate("TInterface", "Created by Goikolov Ilya", nullptr));
        label_6->setText(QCoreApplication::translate("TInterface", "All rights reserved 2020", nullptr));
        label_7->setText(QCoreApplication::translate("TInterface", "(\320\262\320\270\320\264\320\260 x+yi)", nullptr));
        label_value->setText(QString());
        label_8->setText(QCoreApplication::translate("TInterface", "\320\227\320\275\320\260\321\207\320\265\320\275\320\270\320\265 \320\262 \321\202\320\276\321\207\320\272\320\265 X:", nullptr));
        label_9->setText(QCoreApplication::translate("TInterface", "X:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TInterface: public Ui_TInterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TINTERFACE_H
