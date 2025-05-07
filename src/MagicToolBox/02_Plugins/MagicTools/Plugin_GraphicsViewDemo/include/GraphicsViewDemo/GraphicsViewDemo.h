#pragma once

#ifndef GRAPHICSVIEWDEMO_H
# define GRAPHICSVIEWDEMO_H

#include <QMainWindow>

namespace Ui
{
  class GraphicsViewDemo;
}

class GraphicsViewDemo : public QMainWindow
{
  Q_OBJECT
public:
  explicit GraphicsViewDemo(QWidget* parent = nullptr,Qt::WindowFlags flags = Qt::WindowFlags());
  ~GraphicsViewDemo() override;
protected:
  void mousePressEvent(QMouseEvent* event) override;
private
  slots:
  void on_graphicsView_customContextMenuRequested(const QPoint& pos) const;
private:
  Ui::GraphicsViewDemo* ui;
};

#endif//!GRAPHICSVIEWDEMO_H
