#pragma once

#ifndef DATETIMEDELEGATE_H
# define DATETIMEDELEGATE_H

#include <QStyledItemDelegate>

class DateTimeDelegate : public QStyledItemDelegate
{
public:
  explicit DateTimeDelegate(QObject* parent = nullptr);
  ~DateTimeDelegate();
public:
  QWidget* createEditor(QWidget* parent,const QStyleOptionViewItem& option,const QModelIndex& index) const override;
  void setEditorData(QWidget* editor,const QModelIndex& index) const override;
  void setModelData(QWidget* editor,QAbstractItemModel* model,const QModelIndex& index) const override;
};

#endif//!DATETIMEDELEGATE_H
