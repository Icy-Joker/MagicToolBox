#pragma once

#ifndef CHARTDEMO_H
# define CHARTDEMO_H

#include <QMainWindow>

namespace Ui
{
  class ChartDemo;
}

class ChartDemo : public QMainWindow
{
  Q_OBJECT
public:
  explicit ChartDemo(QWidget* parent = nullptr,Qt::WindowFlags flags = Qt::WindowFlags());
  ~ChartDemo() override;
private:
  Ui::ChartDemo* ui;
};

#endif//!CHARTDEMO_H
