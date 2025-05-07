#pragma once

#ifndef PLUGIN_CHARTDEMO_H
# define PLUGIN_CHARTDEMO_H

#include <MagicToolBox/MagicTool.h>

#include <QWidget>

class Plugin_ChartDemo : public MagicTool
{
public:
  Plugin_ChartDemo() = default;
  ~Plugin_ChartDemo() override = default;
public:
  const char* getName() const override;
  const char* getDescription() const override;
  const char* getType() const override;
  QIcon getIcon() const override;
public:
  QWidget* createInstance(QWidget* parent = nullptr,Qt::WindowFlags flags = Qt::WindowFlags()) const override;
};

#endif//!PLUGIN_CHARTDEMO_H
