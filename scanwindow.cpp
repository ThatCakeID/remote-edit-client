#include "scanwindow.h"
#include "ui_scanwindow.h"
#include "scan_item.h"

ScanWindow::ScanWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ScanWindow)
{
    ui->setupUi(this);

    ui->scan_done_widget->setVisible(true);
    ui->scan_progress_widget->setVisible(false);
}

ScanWindow::~ScanWindow(){
    delete ui;
}

void ScanWindow::on_scan_button_clicked() {
    ScanItemModel *model = new ScanItemModel(this);

    toggle_scan();

    // TODO: Do some scanning here

    toggle_scan();

    ui->scan_result_table->setModel(model);
    ui->scan_result_table->horizontalHeader()->setVisible(true);
    ui->scan_result_table->show();
}

void ScanWindow::toggle_scan() {
    if (ui->scan_progress_widget->isVisible()) {
        ui->scan_done_widget->setVisible(true);
        ui->scan_progress_widget->setVisible(false);

    } else {
        ui->scan_done_widget->setVisible(false);
        ui->scan_progress_widget->setVisible(true);
    }

    ui->scan_progress_bar->setValue(0);
}
