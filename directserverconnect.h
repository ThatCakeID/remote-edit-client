#ifndef DIRECTSERVERCONNECT_H
#define DIRECTSERVERCONNECT_H

#include <QWidget>

namespace Ui {
class DirectServerConnect;
}

class DirectServerConnect : public QWidget
{
    Q_OBJECT

public:
    explicit DirectServerConnect(QWidget *parent = nullptr);
    ~DirectServerConnect();

private:
    Ui::DirectServerConnect *ui;
};

#endif // DIRECTSERVERCONNECT_H
