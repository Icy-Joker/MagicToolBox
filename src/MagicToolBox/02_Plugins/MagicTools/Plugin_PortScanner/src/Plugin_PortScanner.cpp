#include "stdafx.h"

#include "Plugin_PortScanner.h"

#include <PortScanner/PortScanner.h>

Plugin_PortScanner::Plugin_PortScanner()
{
  this->setName("PortScanner");
  this->setDescription("PortScanner");
  this->setType("未分类");
  this->setIcon(QIcon(":/PortScanner/PortScanner.png"));
}

Plugin_PortScanner::~Plugin_PortScanner()
{
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
