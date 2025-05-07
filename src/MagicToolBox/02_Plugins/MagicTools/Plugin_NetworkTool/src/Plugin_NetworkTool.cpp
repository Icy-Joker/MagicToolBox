#include "stdafx.h"

#include "Plugin_NetworkTool.h"

#include <NetworkTool/NetworkTool.h>

const char* Plugin_NetworkTool::getName() const
{
  return "NetworkTool";
}

const char* Plugin_NetworkTool::getDescription() const
{
  return "NetworkTool";
}

const char* Plugin_NetworkTool::getType() const
{
  return "常规";
}

QIcon Plugin_NetworkTool::getIcon() const
{
  return (QIcon(":/icons/icon.png"));
}

QWidget* Plugin_NetworkTool::createInstance(QWidget* parent,Qt::WindowFlags flags) const
{
  QWidget* result = nullptr;

  if(NetworkTool* widget_instance = new NetworkTool(parent,flags))
  {
    result = widget_instance;
  }

  return result;
}

extern "C"
{
  NetworkTool_API Plugin_NetworkTool* getPlugin()
  {
    static Plugin_NetworkTool plugin_instance;
    return &plugin_instance;
  }
}
