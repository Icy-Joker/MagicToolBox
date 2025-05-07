#include "stdafx.h"

#include "Plugin_GraphicsViewDemo.h"

#include <GraphicsViewDemo/GraphicsViewDemo.h>

const char* Plugin_GraphicsViewDemo::getName() const
{
  return "GraphicsViewDemo";
}

const char* Plugin_GraphicsViewDemo::getDescription() const
{
  return "GraphicsViewDemo";
}

const char* Plugin_GraphicsViewDemo::getType() const
{
  return "常规";
}

QIcon Plugin_GraphicsViewDemo::getIcon() const
{
  return (QIcon(":/icons/icon.png"));
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
