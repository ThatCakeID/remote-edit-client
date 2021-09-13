#ifndef CONNECTIONMETHOD_H
#define CONNECTIONMETHOD_H

#include <QWidget>

namespace Ui {
class ConnectionMethod;
}

class ConnectionMethod : public QWidget
{
    Q_OBJECT

public:
    explicit ConnectionMethod(QWidget *parent = nullptr);
    ~ConnectionMethod();

private slots:
    void on_direct_button_clicked();
    void on_scan_button_clicked();

private:
    Ui::ConnectionMethod *ui;
};

#endif // CONNECTIONMETHOD_H
