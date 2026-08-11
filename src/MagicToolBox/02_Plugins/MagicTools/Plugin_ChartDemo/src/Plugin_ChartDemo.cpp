#include "stdafx.h"

#include "Plugin_ChartDemo.h"

#include <ChartDemo/ChartDemo.h>

Plugin_ChartDemo::Plugin_ChartDemo()
{
  this->setName("ChartDemo");
  this->setDescription("ChartDemo");
  this->setType("未分类");
  this->setIcon(QIcon(":/ChartDemo/ChartDemo.png"));
}

Plugin_ChartDemo::~Plugin_ChartDemo()
{
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
