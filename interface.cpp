#include "interface.h"
#include "ui_tinterface.h"
#include <QDebug>

TInterface::TInterface(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TInterface)
{
    ui->setupUi(this);
}

TInterface::~TInterface()
{
    delete ui;
}


number getComplex(QString str){
    QStringList list;
    double re=0, im=0;
    str.replace(" ", "");
    str.replace('*', "");
    QRegExp rx("[\\+\\-]?\\d+(\\.\\d+)?i?");
    int pos = 0;
    while ((pos = rx.indexIn(str, pos)) != -1) {
         list << rx.cap(0);
         pos += rx.matchedLength();
     }
    qDebug() << list;


    int count = list.count();
    if (count==2){
        if (list[0].contains('i')){
           list[0].replace('i',"");
           im = list[0].toDouble();
           re = list[1].toDouble();
        } else {
            list[1].replace('i',"");
            im = list[1].toDouble();
            re = list[0].toDouble();
        }
    } else if (count==1) {
        if (list[0].contains('i')){
            list[0].replace('i',"");
            im = list[0].toDouble();
        } else {
            re = list[0].toDouble();
        }
    } else {
        re = 0;
        im = 0;
    }

    number n(re,im);
    return n;
}

void TInterface::on_pushButton_clicked()
{
    number x[2];
    QString a = ui->lineEdit_a->text();
    QString b = ui->lineEdit_b->text();
    QString c = ui->lineEdit_c->text();
    QString xVal = ui->lineEdit_x->text();

    number _x = getComplex(xVal);
    number ac = getComplex(a);
    number bc = getComplex(b);
    number cc = getComplex(c);
    polinom p(ac,bc,cc);
    number _y = p.value(_x);
    ui->label_value->setText(_y.toString());
    ui->label_polinom->setText(p.text());

    int n = p.roots(x);
    switch (n)
    {
    case 0:
        ui->label_root1->setText("ERROR a = 0: Try again with a!=0");
        break;
    case 1:
        ui->label_root1->setText("x1=x2= "+x[0].toString());
        break;
    case 2:
        ui->label_root1->setText("x1 = "+x[0].toString());
        ui->label_root2->setText("x2 = "+x[1].toString());
        break;
    }
}

void TInterface::on_pushButton_2_clicked()
{
    exit(0);
}
