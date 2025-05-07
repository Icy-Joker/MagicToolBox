#pragma once

#ifndef SWITCHDELEGATE_H
# define SWITCHDELEGATE_H

#include <QStyledItemDelegate>

class SwitchDelegate : public QStyledItemDelegate
{
public:
  explicit SwitchDelegate();
  ~SwitchDelegate();
public:
  QWidget* createEditor(QWidget* parent,const QStyleOptionViewItem& option,const QModelIndex& index) const override;
  void paint(QPainter* painter,const QStyleOptionViewItem& option,const QModelIndex& index) const override;
  bool editorEvent(QEvent* event,QAbstractItemModel* model,const QStyleOptionViewItem& option,const QModelIndex& index) override;
};

#endif//!SWITCHDELEGATE_H
