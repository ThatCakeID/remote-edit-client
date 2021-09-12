#include "directserverconnect.h"
#include "ui_directserverconnect.h"

DirectServerConnect::DirectServerConnect(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DirectServerConnect)
{
    ui->setupUi(this);
}

DirectServerConnect::~DirectServerConnect()
{
    delete ui;
}
