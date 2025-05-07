#pragma once

#ifndef CUSTOMGRAPHICSVIEW_H
# define CUSTOMGRAPHICSVIEW_H

#include <QGraphicsView>

class CustomGraphicsView : public QGraphicsView
{
  Q_OBJECT
public:
  explicit CustomGraphicsView(QWidget* parent = nullptr);
  ~CustomGraphicsView();
protected:
  void dragEnterEvent(QDragEnterEvent* event) override;
  void dragMoveEvent(QDragMoveEvent* event) override;
  void dropEvent(QDropEvent* event) override;
};

#endif//!CUSTOMGRAPHICSVIEW_H
