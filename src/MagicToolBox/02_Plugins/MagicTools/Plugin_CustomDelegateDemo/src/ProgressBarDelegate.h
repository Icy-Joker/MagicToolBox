#pragma once

#ifndef PROGRESSBARDELEGATE_H
# define PROGRESSBARDELEGATE_H

#include <QStyledItemDelegate>

class ProgressBarDelegate : public QStyledItemDelegate
{
public:
  explicit ProgressBarDelegate(QObject* parent = nullptr);
  ~ProgressBarDelegate();
public:
  QWidget* createEditor(QWidget* parent,const QStyleOptionViewItem& option,const QModelIndex& index) const override;
  void paint(QPainter* painter,const QStyleOptionViewItem& option,const QModelIndex& index) const override;
};

#endif//!PROGRESSBARDELEGATE_H
