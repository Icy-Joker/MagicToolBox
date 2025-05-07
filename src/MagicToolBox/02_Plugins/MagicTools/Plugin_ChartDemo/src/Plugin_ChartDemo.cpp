#include "stdafx.h"

#include "Plugin_ChartDemo.h"

#include <ChartDemo/ChartDemo.h>

const char* Plugin_ChartDemo::getName() const
{
  return "ChartDemo";
}

const char* Plugin_ChartDemo::getDescription() const
{
  return "ChartDemo";
}

const char* Plugin_ChartDemo::getType() const
{
  return "常规";
}

QIcon Plugin_ChartDemo::getIcon() const
{
  return QIcon(":/icons/icon.png");
}

QWidget* Plugin_ChartDemo::createInstance(QWidget* parent,Qt::WindowFlags flags) const
{
  QWidget* result = nullptr;

  if(ChartDemo* widget_instance = new ChartDemo(parent,flags))
  {
    result = widget_instance;
  }

  return result;
}

extern "C"
{
  ChartDemo_API Plugin_ChartDemo* getPlugin()
  {
    static Plugin_ChartDemo plugin_instance;
    return &plugin_instance;
  }
}
