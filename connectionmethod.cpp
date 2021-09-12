#include "connectionmethod.h"
#include "ui_connectionmethod.h"

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
