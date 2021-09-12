#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "connectionmethod.cpp"
#include "directserverconnect.cpp"

MainWindow::MainWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QWidget* connectionMethod = new ConnectionMethod();
    QWidget* directServerConnect = new DirectServerConnect();

    ui->stackedWidget->addWidget(connectionMethod);
    ui->stackedWidget->addWidget(directServerConnect);
    ui->stackedWidget->setCurrentWidget(connectionMethod);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::switchScreen(int index)
{
    ui->stackedWidget->setCurrentIndex(index);
}
