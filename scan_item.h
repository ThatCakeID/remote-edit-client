#ifndef SCAN_ITEM_H
#define SCAN_ITEM_H

#include <QAbstractTableModel>

class ScanItemModel : public QAbstractTableModel {
    Q_OBJECT

public:
    ScanItemModel(QObject *parent = 0);

    void populateData(const QList<QString> &IPs, const QList<QString> &ports, const QList<QString> &description);
    void appendItem(const QString IP, const QString port, const QString description);

    int rowCount(const QModelIndex &parent = QModelIndex()) const Q_DECL_OVERRIDE;
    int columnCount(const QModelIndex &parent = QModelIndex()) const Q_DECL_OVERRIDE;

    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const Q_DECL_OVERRIDE;
    QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const Q_DECL_OVERRIDE;

private:
    QList<QString> IPs;
    QList<QString> ports;
    QList<QString> descriptions;
};

#endif // SCAN_ITEM_H
