#include "connectionmethod.h"
#include "ui_connectionmethod.h"
#include "mainwindow.h"
#include <QStackedWidget>

ConnectionMethod::ConnectionMethod(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ConnectionMethod)
{
    ui->setupUi(this);
}

ConnectionMethod::~ConnectionMethod()
{
    delete ui;
}

void ConnectionMethod::on_direct_button_clicked()
{
    // TUDO: Switch screen (impossible)
}
