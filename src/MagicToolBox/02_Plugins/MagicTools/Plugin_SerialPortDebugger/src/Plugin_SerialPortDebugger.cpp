#include "stdafx.h"

#include "Plugin_SerialPortDebugger.h"

#include <SerialPortDebugger/SerialPortDebugger.h>

Plugin_SerialPortDebugger::Plugin_SerialPortDebugger()
{
  this->setName("SerialPortDebugger");
  this->setDescription("SerialPortDebugger");
  this->setType("未分类");
  this->setIcon(QIcon(":/SerialPortDebugger/SerialPortDebugger.png"));
}

Plugin_SerialPortDebugger::~Plugin_SerialPortDebugger()
{
}

QWidget* Plugin_SerialPortDebugger::createInstance(QWidget* parent,Qt::WindowFlags flags) const
{
  QWidget* result = nullptr;

  if(SerialPortDebugger* widget_instance = new SerialPortDebugger(parent,flags))
  {
    result = widget_instance;
  }

  return result;
}

extern "C"
{
  SerialPortDebugger_API Plugin_SerialPortDebugger* getPlugin()
  {
    static Plugin_SerialPortDebugger plugin_instance;
    return &plugin_instance;
  }
}
