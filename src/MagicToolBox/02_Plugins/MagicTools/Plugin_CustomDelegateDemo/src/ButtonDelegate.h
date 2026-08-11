#pragma once

#ifndef BUTTONDELEGATE_H
# define BUTTONDELEGATE_H

#include <QStyledItemDelegate>
#include <QPushButton>

class ButtonDelegate : public QStyledItemDelegate
{
public:
  explicit ButtonDelegate(QObject* parent = nullptr);
  ~ButtonDelegate();
public:
  QWidget* createEditor(QWidget* parent,const QStyleOptionViewItem& option,const QModelIndex& index) const override;
  void paint(QPainter* painter,const QStyleOptionViewItem& option,const QModelIndex& index) const override;
  bool editorEvent(QEvent* event,QAbstractItemModel* model,const QStyleOptionViewItem& option,const QModelIndex& index) override;
private:
};

#endif//!BUTTONDELEGATE_H
