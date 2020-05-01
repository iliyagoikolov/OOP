#include "interface.h"
#include "ui_tinterface.h"


TInterface::TInterface(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TInterface)
{
    ui->setupUi(this);
    socketServer = new QUdpSocket(this);
    socketServerRecieve = new QUdpSocket(this);
    socketServerRecieve->bind(QHostAddress::LocalHost, 7777);
    connect(socketServerRecieve,SIGNAL(readyRead()),this,SLOT(readyRead()));

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


void TInterface::on_pushButton_2_clicked()
{
    exit(0);
}

void TInterface::SendMessage(QString polinomText, QString polinomValue, number roots[2], int n)
{
  QByteArray Data;
  Data.append(polinomText);
  Data.append("&&");
  Data.append(polinomValue);
  Data.append("&&");
  for (int i = 0; i < 2; i++) {
    Data.append(QString::number(roots[i].getRe()));
    Data.append("|");
    Data.append(QString::number(roots[i].getIm()));
    Data.append("&&");
  }
  Data.append(QString::number(n));
  socketServer->writeDatagram(Data,QHostAddress::LocalHost,8888);
}

QStringList unBoxing(QString str, QString separator) {
    QStringList list = str.split(separator);
    return list;
}

void TInterface::readyRead()
{
  QByteArray Buffer;
  Buffer.resize(socketServerRecieve->pendingDatagramSize());
  QHostAddress sender;
  quint16 senderPort;
  socketServerRecieve->readDatagram(Buffer.data(),Buffer.size(),&sender,&senderPort);
  QString buf = Buffer.data();
  QStringList bothPartsOfOneNumber = unBoxing(buf, "&&"); // Like "RE|IM" strings
  int len = bothPartsOfOneNumber.length();
  for (int i =0; i<len;i++)
  {
   QStringList list = unBoxing(bothPartsOfOneNumber[i], "|");
     gotNum[i] = number(list[0].toDouble(), list[1].toDouble());
  }
  number x[2];
  number ac = gotNum[0];
  number bc = gotNum[1];
  number cc = gotNum[2];
  number _x = gotNum[3];
  polinom p(ac,bc,cc);
  number _y = p.value(_x);
  QString polinomText = p.text();
  QString polinomValue = _y.toString();
  int n = p.roots(x);
  this->SendMessage(polinomText, polinomValue, x, n);
}
