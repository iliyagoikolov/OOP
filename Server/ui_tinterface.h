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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TInterface
{
public:
    QWidget *centralwidget;
    QLabel *label_polinom;
    QLabel *label_root2;
    QLabel *label_root1;
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *label_6;
    QLabel *label_4;

    void setupUi(QMainWindow *TInterface)
    {
        if (TInterface->objectName().isEmpty())
            TInterface->setObjectName(QString::fromUtf8("TInterface"));
        TInterface->resize(422, 435);
        TInterface->setMouseTracking(false);
        centralwidget = new QWidget(TInterface);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_polinom = new QLabel(centralwidget);
        label_polinom->setObjectName(QString::fromUtf8("label_polinom"));
        label_polinom->setGeometry(QRect(150, 140, 260, 40));
        QFont font;
        font.setPointSize(12);
        label_polinom->setFont(font);
        label_polinom->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_root2 = new QLabel(centralwidget);
        label_root2->setObjectName(QString::fromUtf8("label_root2"));
        label_root2->setGeometry(QRect(40, 340, 331, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Times New Roman"));
        font1.setPointSize(12);
        label_root2->setFont(font1);
        label_root1 = new QLabel(centralwidget);
        label_root1->setObjectName(QString::fromUtf8("label_root1"));
        label_root1->setGeometry(QRect(80, 310, 331, 21));
        label_root1->setFont(font1);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(0, 310, 421, 121));
        pushButton_2->setFont(font1);
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(140, 210, 141, 16));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Times New Roman"));
        font2.setPointSize(10);
        label->setFont(font2);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(140, 230, 141, 16));
        label_6->setFont(font2);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(0, 80, 421, 131));
        QFont font3;
        font3.setPointSize(29);
        label_4->setFont(font3);
        label_4->setAlignment(Qt::AlignCenter);
        TInterface->setCentralWidget(centralwidget);

        retranslateUi(TInterface);

        QMetaObject::connectSlotsByName(TInterface);
    } // setupUi

    void retranslateUi(QMainWindow *TInterface)
    {
        TInterface->setWindowTitle(QCoreApplication::translate("TInterface", "TInterface", nullptr));
        label_polinom->setText(QString());
        label_root2->setText(QString());
        label_root1->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("TInterface", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        label->setText(QCoreApplication::translate("TInterface", "Created by Goikolov Ilya", nullptr));
        label_6->setText(QCoreApplication::translate("TInterface", "All rights reserved 2020", nullptr));
        label_4->setText(QCoreApplication::translate("TInterface", "SERVER", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TInterface: public Ui_TInterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TINTERFACE_H
