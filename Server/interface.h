#ifndef TINTERFACE_H
#define TINTERFACE_H
#include <QUdpSocket>
#include <QMainWindow>
#include "polinom.h"

#include <QObject>
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
    number gotNum[4];
    void SendMessage(QString polinomText, QString polinomValue, number roots[2], int n);

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::TInterface *ui;
    QUdpSocket *socketServer;
    QUdpSocket *socketServerRecieve;

signals:

public slots:
    void readyRead();
};
#endif // TINTERFACE_H
