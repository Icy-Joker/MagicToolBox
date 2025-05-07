#include "stdafx.h"

#include "Plugin_SerialPortDebugger.h"

#include <SerialPortDebugger/SerialPortDebugger.h>

const char* Plugin_SerialPortDebugger::getName() const
{
  return "SerialPortDebugger";
}

const char* Plugin_SerialPortDebugger::getDescription() const
{
  return "SerialPortDebugger";
}

const char* Plugin_SerialPortDebugger::getType() const
{
  return "常规";
}

QIcon Plugin_SerialPortDebugger::getIcon() const
{
  return QIcon(":/icons/icon.png");
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
