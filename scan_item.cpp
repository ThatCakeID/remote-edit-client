#include "scan_item.h"

ScanItemModel::ScanItemModel(QObject *parent) : QAbstractTableModel(parent) {}

// Create a method to populate the model with data:
void ScanItemModel::populateData(const QList<QString> &IPs_, const QList<QString> &ports_, const QList<QString> &description_) {
    IPs.clear();
    IPs = IPs_;

    ports.clear();
    ports = ports_;

    descriptions.clear();
    descriptions = description_;

    return;
}

void ScanItemModel::appendItem(const QString IP, const QString port, const QString description) {
    IPs.append(IP);
    ports.append(port);
    descriptions.append(description);
}

int ScanItemModel::rowCount(const QModelIndex &parent) const {
    Q_UNUSED(parent);
    return IPs.length();
}

int ScanItemModel::columnCount(const QModelIndex &parent) const {
    Q_UNUSED(parent);
    return 3;
}

QVariant ScanItemModel::data(const QModelIndex &index, int role) const {
    if (!index.isValid() || role != Qt::DisplayRole) {
        return QVariant();
    }

    if (index.column() == 0) {
        return IPs[index.row()];
    } else if (index.column() == 1) {
        return ports[index.row()];
    } else if (index.column() == 2) {
        return descriptions[index.row()];
    }

    return QVariant();
}

QVariant ScanItemModel::headerData(int section, Qt::Orientation orientation, int role) const {
    if (!(role == Qt::DisplayRole && orientation == Qt::Horizontal)) {
        return QVariant();
    }

    if (section == 0) {
        return QString("IP");
    } else if (section == 1) {
        return QString("Port");
    } else if (section == 2) {
        return QString("Description");
    }

    return QVariant();
}
