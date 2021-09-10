#ifndef SCANWINDOW_H
#define SCANWINDOW_H

#include <QWidget>
#include "scan_item.h"

QT_BEGIN_NAMESPACE
namespace Ui { class ScanWindow; }
QT_END_NAMESPACE

class ScanWindow : public QWidget
{
    Q_OBJECT

public:
    ScanWindow(QWidget *parent = nullptr);
    ~ScanWindow();

private slots:
    void on_scan_button_clicked();

private:
    Ui::ScanWindow *ui;

    void toggle_scan();
};

#endif // SCANWINDOW_H
