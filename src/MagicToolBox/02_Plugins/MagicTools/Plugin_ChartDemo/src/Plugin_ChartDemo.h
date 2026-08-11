#pragma once

#ifndef PLUGIN_CHARTDEMO_H
# define PLUGIN_CHARTDEMO_H

#include <MagicToolBox/MagicTool.h>

#include <QWidget>

class Plugin_ChartDemo : public MagicTool
{
public:
  explicit Plugin_ChartDemo();
  ~Plugin_ChartDemo() override;
public:
  QWidget* createInstance(QWidget* parent = nullptr,Qt::WindowFlags flags = Qt::WindowFlags()) const override;
};

#endif//!PLUGIN_CHARTDEMO_H
