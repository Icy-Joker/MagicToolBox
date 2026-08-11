#include "stdafx.h"

#include "Plugin_NetworkTool.h"

#include <NetworkTool/NetworkTool.h>

Plugin_NetworkTool::Plugin_NetworkTool()
{
  this->setName("NetworkTool");
  this->setDescription("NetworkTool");
  this->setType("未分类");
  this->setIcon(QIcon(":/NetworkTool/NetworkTool.png"));
}

Plugin_NetworkTool::~Plugin_NetworkTool()
{
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
