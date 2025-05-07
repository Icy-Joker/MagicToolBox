#pragma once

#ifndef DOUBLESPINBOXDELEGATE_H
# define DOUBLESPINBOXDELEGATE_H

#include <QStyledItemDelegate>

class DoubleSpinBoxDelegate : public QStyledItemDelegate
{
public:
  explicit DoubleSpinBoxDelegate(QObject* parent = nullptr);
  ~DoubleSpinBoxDelegate();
public:
  QWidget* createEditor(QWidget* parent,const QStyleOptionViewItem& option,const QModelIndex& index) const override;
  void setEditorData(QWidget* editor,const QModelIndex& index) const override;
  void setModelData(QWidget* editor,QAbstractItemModel* model,const QModelIndex& index) const override;
  //void paint(QPainter* painter,const QStyleOptionViewItem& option,const QModelIndex& index) const override;
};

#endif//!DOUBLESPINBOXDELEGATE_H
