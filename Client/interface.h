#ifndef TINTERFACE_H
#define TINTERFACE_H
#include <QUdpSocket>
#include <QMainWindow>
#include "polinom.h"

#include <QObject>
#include <QDebug>
#include <QString>

QT_BEGIN_NAMESPACE
namespace Ui { class TInterface; }
QT_END_NAMESPACE

class TInterface : public QMainWindow
{
    Q_OBJECT

public:
    TInterface(QWidget *parent = nullptr);
    ~TInterface();
    QString message;
    void SendMessage(number koeff[3], number x);

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::TInterface *ui;
    QUdpSocket *socketClient;
    QUdpSocket *socketClientRecieve;

signals:

public slots:
    void readyRead();
};
#endif // TINTERFACE_H
