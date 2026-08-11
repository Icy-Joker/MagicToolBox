#include "stdafx.h"

#include "Plugin_GraphicsViewDemo.h"

#include <GraphicsViewDemo/GraphicsViewDemo.h>

Plugin_GraphicsViewDemo::Plugin_GraphicsViewDemo()
{
  this->setName("GraphicsViewDemo");
  this->setDescription("GraphicsViewDemo");
  this->setType("未分类");
  this->setIcon(QIcon(":/GraphicsViewDemo/GraphicsViewDemo.png"));
}

Plugin_GraphicsViewDemo::~Plugin_GraphicsViewDemo()
{
}

QWidget* Plugin_GraphicsViewDemo::createInstance(QWidget* parent,Qt::WindowFlags flags) const
{
  QWidget* result = nullptr;

  if(GraphicsViewDemo* widget_instance = new GraphicsViewDemo(parent,flags))
  {
    result = widget_instance;
  }

  return result;
}

extern "C"
{
  GraphicsViewDemo_API Plugin_GraphicsViewDemo* getPlugin()
  {
    static Plugin_GraphicsViewDemo plugin_instance;
    return &plugin_instance;
  }
}
