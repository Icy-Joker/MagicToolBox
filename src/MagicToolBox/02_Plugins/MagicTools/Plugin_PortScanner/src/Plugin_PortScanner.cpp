#include "stdafx.h"

#include "Plugin_PortScanner.h"

#include <PortScanner/PortScanner.h>

const char* Plugin_PortScanner::getName() const
{
  return "PortScanner";
}

const char* Plugin_PortScanner::getDescription() const
{
  return "PortScanner";
}

const char* Plugin_PortScanner::getType() const
{
  return "常规";
}

QIcon Plugin_PortScanner::getIcon() const
{
  return (QIcon(":/icons/icon.png"));
}

QWidget* Plugin_PortScanner::createInstance(QWidget* parent,Qt::WindowFlags flags) const
{
  QWidget* result = nullptr;

  if(PortScanner* widget_instance = new PortScanner(parent,flags))
  {
    result = widget_instance;
  }

  return result;
}

extern "C"
{
  PortScanner_API Plugin_PortScanner* getPlugin()
  {
    static Plugin_PortScanner plugin_instance;
    return &plugin_instance;
  }
}
