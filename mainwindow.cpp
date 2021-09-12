#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "connectionmethod.cpp"

MainWindow::MainWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QWidget* connectionMethod = new ConnectionMethod();

    ui->stackedWidget->addWidget(connectionMethod);
    ui->stackedWidget->setCurrentWidget(connectionMethod);
}

MainWindow::~MainWindow()
{
    delete ui;
}
