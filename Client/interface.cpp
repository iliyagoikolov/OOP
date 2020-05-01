#include "interface.h"
#include "ui_tinterface.h"
#include <QDebug>

TInterface::TInterface(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TInterface)
{
    ui->setupUi(this);
    socketClient = new QUdpSocket(this);
    socketClientRecieve = new QUdpSocket(this);
    socketClientRecieve->bind(QHostAddress::LocalHost, 8888);
    connect(socketClientRecieve,SIGNAL(readyRead()),this,SLOT(readyRead()));
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
    number koeffs[3];
    QString a = ui->lineEdit_a->text();
    QString b = ui->lineEdit_b->text();
    QString c = ui->lineEdit_c->text();
    QString xVal = ui->lineEdit_x->text();

    number _x = getComplex(xVal);
    number ac = getComplex(a);
    number bc = getComplex(b);
    number cc = getComplex(c);
    koeffs[0] = ac;
    koeffs[1] = bc;
    koeffs[2] = cc;
    this->SendMessage(koeffs, _x); //////// SEND numbers
}

void TInterface::on_pushButton_2_clicked()
{
    exit(0);
}

void TInterface::SendMessage(number koeff[3], number x)
{
  QByteArray Data;
  for (int i = 0; i < 3; i++) {
    Data.append(QString::number(koeff[i].getRe()));
    Data.append("|");
    Data.append(QString::number(koeff[i].getIm()));
    Data.append("&&");
  }
  Data.append(QString::number(x.getRe()));
  Data.append("|");
  Data.append(QString::number(x.getIm()));
  socketClient->writeDatagram(Data,QHostAddress::LocalHost,7777);
  qDebug() << "Send message " << Data << " from CLIENT to SERVER" ;
}

QStringList unBoxing(QString str, QString separator) {
    QStringList list = str.split(separator);
    return list;
}
void TInterface::readyRead()
{
  ui->label_root2->setText("");
  QByteArray Buffer;
  Buffer.resize(socketClientRecieve->pendingDatagramSize());
  QHostAddress sender;
  quint16 senderPort;
  socketClientRecieve->readDatagram(Buffer.data(),Buffer.size(),&sender,&senderPort);
  qDebug() << "Message from sender: " << sender.toString();
  qDebug() << "Message port: " << senderPort;
  qDebug() << "Message: " << Buffer.data();
  QString buf = Buffer.data();


  QStringList list = unBoxing(buf, "&&");
  QString polinomText = list[0];
  QString polinomValue = list[1];
  QString roots[2];
  number gotNum[2];
  roots[0] = list[2];
  roots[1] = list[3];
  int n = list[4].toInt();
  ui->label_polinom->setText(polinomText);
  ui->label_value->setText(polinomValue);
  for (int i =0;i<n;i++)
  {
      list = unBoxing(roots[i], "|");
      gotNum[i] = number(list[0].toDouble(), list[1].toDouble());
  }

  if (n == 1)
  {
    ui->label_root1->setText("x1=x2= " + gotNum[0].toString());
  }
  else if (n == 0)
  {
      ui->label_root1->setText("ERROR a = 0: Try again with a!=0");
  }
  else if (n == 2)
  {
      ui->label_root1->setText("x1 = "+ gotNum[0].toString());
      ui->label_root2->setText("x2 = "+ gotNum[1].toString());
  }

}


