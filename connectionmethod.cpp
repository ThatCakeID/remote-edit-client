#include "connectionmethod.h"
#include "ui_connectionmethod.h"
#include "directserverconnect.h"
#include "scanwindow.h"

QWidget* directServerConnect;
QWidget* scanForServers;

ConnectionMethod::ConnectionMethod(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ConnectionMethod)
{
    ui->setupUi(this);

    directServerConnect = new DirectServerConnect();
    scanForServers = new ScanWindow();

    ui->stackedWidget->addWidget(directServerConnect);
    ui->stackedWidget->addWidget(scanForServers);
    ui->stackedWidget->setVisible(false);
}

ConnectionMethod::~ConnectionMethod()
{
    delete ui;
}

void ConnectionMethod::on_direct_button_clicked()
{
    ui->stackedWidget->setVisible(true);
    ui->stackedWidget->setCurrentWidget(directServerConnect);
}

void ConnectionMethod::on_scan_button_clicked()
{
    ui->stackedWidget->setVisible(true);
    ui->stackedWidget->setCurrentWidget(scanForServers);
}

