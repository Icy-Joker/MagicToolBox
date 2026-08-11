#pragma once

#ifndef CUSTOMGRAPHICSITEM_H
# define CUSTOMGRAPHICSITEM_H

#include <QGraphicsRectItem>

class CustomGraphicsItem : public QGraphicsRectItem
{
public:
  explicit CustomGraphicsItem(QWidget* widget,QGraphicsItem* parent = nullptr);
  ~CustomGraphicsItem();
public:
};

#endif//!CUSTOMGRAPHICSITEM_H
