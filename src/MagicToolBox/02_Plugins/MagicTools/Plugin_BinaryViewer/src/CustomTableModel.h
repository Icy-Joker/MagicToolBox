#pragma once

#ifndef CUSTOMTABLEMODEL_H
# define CUSTOMTABLEMODEL_H

#include <QStandardItemModel>

class CustomTableModel : public QStandardItemModel
{
  Q_OBJECT
public:
  explicit CustomTableModel(QObject* parent = nullptr);
  ~CustomTableModel();
public:
  QVariant headerData(int section,Qt::Orientation orientation,int role) const override;
  int rowCount(const QModelIndex& parent) const override;
  int columnCount(const QModelIndex& parent) const override;
  QVariant data(const QModelIndex& index,int role) const override;
};

#endif//!CUSTOMTABLEMODEL_H
