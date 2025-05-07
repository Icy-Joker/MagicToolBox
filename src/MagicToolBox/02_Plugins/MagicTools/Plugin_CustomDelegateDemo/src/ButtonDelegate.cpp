#include "stdafx.h"

#include "ButtonDelegate.h"

#include <QApplication>
#include <QMouseEvent>
#include <QPainter>
#include <QPushButton>
#include <QHBoxLayout>

ButtonDelegate::ButtonDelegate(QObject* parent):
  QStyledItemDelegate(parent)
{
}

ButtonDelegate::~ButtonDelegate()
{
}

QWidget* ButtonDelegate::createEditor(QWidget* parent,const QStyleOptionViewItem& option,const QModelIndex& index) const
{
  QWidget* editor = nullptr;

  return editor;
}

void ButtonDelegate::paint(QPainter* painter,const QStyleOptionViewItem& option,const QModelIndex& index) const
{
  QStyleOptionButton push_button_option;
  push_button_option.text = "231";
  push_button_option.rect = option.rect;
  //push_button_option.text = index.data().toString();
  push_button_option.state = option.state;

  // 设置颜色模拟 stylesheet 效果
  //push_button_option.palette.setColor(QPalette::Button, QColor("#ffcc00"));
  //push_button_option.palette.setColor(QPalette::ButtonText, Qt::black);

  option.widget->style()->drawControl(QStyle::CE_PushButton, &push_button_option, painter);
}

bool ButtonDelegate::editorEvent(QEvent* event,QAbstractItemModel* model,const QStyleOptionViewItem& option,const QModelIndex& index)
{
  bool result = false;

  result = QStyledItemDelegate::editorEvent(event,model,option,index);

  return result;
}
