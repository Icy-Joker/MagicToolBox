#pragma once

#ifndef SLIDERDELEGATE_H
# define SLIDERDELEGATE_H

#include <QStyledItemDelegate>

class SliderDelegate : public QStyledItemDelegate
{
public:
  explicit SliderDelegate(QObject* parent = nullptr);
  ~SliderDelegate();
public:
  QWidget* createEditor(QWidget* parent,const QStyleOptionViewItem& option,const QModelIndex& index) const override;
  void setEditorData(QWidget* editor,const QModelIndex& index) const override;
  void setModelData(QWidget* editor,QAbstractItemModel* model,const QModelIndex& index) const override;
  //void paint(QPainter* painter,const QStyleOptionViewItem& option,const QModelIndex& index) const override;
};

#endif//!SLIDERDELEGATE_H
