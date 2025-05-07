#include "stdafx.h"

#include "SwitchDelegate.h"

#include <QPainter>

SwitchDelegate::SwitchDelegate()
{
}

SwitchDelegate::~SwitchDelegate()
{
}

QWidget* SwitchDelegate::createEditor(QWidget* parent,const QStyleOptionViewItem& option,const QModelIndex& index) const
{
  return QStyledItemDelegate::createEditor(parent,option,index);
}

void SwitchDelegate::paint(QPainter* painter,const QStyleOptionViewItem& option,const QModelIndex& index) const
{
  painter->save();

  QVariant value = index.data(Qt::UserRole);
  if(value.canConvert<bool>())
  {
    if(value.toBool())
    {
      painter->drawPixmap(option.rect,QPixmap(":/SwitchOn.png"));
    }
    else
    {
    }
  }

  painter->restore();
}

bool SwitchDelegate::editorEvent(QEvent* event,QAbstractItemModel* model,const QStyleOptionViewItem& option,const QModelIndex& index)
{
  return QStyledItemDelegate::editorEvent(event,model,option,index);
}
