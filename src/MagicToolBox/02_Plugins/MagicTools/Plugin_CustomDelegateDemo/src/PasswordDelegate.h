#pragma once

#ifndef PASSWORDDELEGATE_H
# define PASSWORDDELEGATE_H

#include <QStyledItemDelegate>

class PasswordDelegate : public QStyledItemDelegate
{
public:
  explicit PasswordDelegate(QObject* parent = nullptr);
  ~PasswordDelegate();
public:
  QWidget* createEditor(QWidget* parent,const QStyleOptionViewItem& option,const QModelIndex& index) const override;
  void setEditorData(QWidget* editor,const QModelIndex& index) const override;
  void setModelData(QWidget* editor,QAbstractItemModel* model,const QModelIndex& index) const override;
  QString displayText(const QVariant& value,const QLocale& locale) const override;
};

#endif//!PASSWORDDELEGATE_H
