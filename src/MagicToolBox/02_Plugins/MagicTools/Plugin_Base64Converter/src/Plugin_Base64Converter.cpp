#include "stdafx.h"

#include "Plugin_Base64Converter.h"

#include <Base64Converter/Base64Converter.h>

const char* Plugin_Base64Converter::getName() const
{
  return "Base64Converter";
}

const char* Plugin_Base64Converter::getDescription() const
{
  return "Base64Converter";
}

const char* Plugin_Base64Converter::getType() const
{
  return "常规";
}

QIcon Plugin_Base64Converter::getIcon() const
{
  return QIcon(":/icons/icon.png");
}

QWidget* Plugin_Base64Converter::createInstance(QWidget* parent,Qt::WindowFlags flags) const
{
  QWidget* result = nullptr;

  if(Base64Converter* widget_instance = new Base64Converter(parent,flags))
  {
    result = widget_instance;
  }

  return result;
}

extern "C"
{
  Base64Converter_API Plugin_Base64Converter* getPlugin()
  {
    static Plugin_Base64Converter plugin_instance;
    return &plugin_instance;
  }
}
