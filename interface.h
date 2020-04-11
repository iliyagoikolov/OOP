#ifndef TINTERFACE_H
#define TINTERFACE_H

#include <QMainWindow>
#include "polinom.h"

QT_BEGIN_NAMESPACE
namespace Ui { class TInterface; }
QT_END_NAMESPACE

class TInterface : public QMainWindow
{
    Q_OBJECT

public:
    TInterface(QWidget *parent = nullptr);
    ~TInterface();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::TInterface *ui;
};
#endif // TINTERFACE_H
