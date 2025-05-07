#include "stdafx.h"

#include "Plugin_CustomDelegateDemo.h"

#include <CustomDelegateDemo/CustomDelegateDemo.h>

const char* Plugin_CustomDelegateDemo::getName() const
{
  return "CustomDelegateDemo";
}

const char* Plugin_CustomDelegateDemo::getDescription() const
{
  return "CustomDelegateDemo";
}

const char* Plugin_CustomDelegateDemo::getType() const
{
  return "常规";
}

QIcon Plugin_CustomDelegateDemo::getIcon() const
{
  return (QIcon(":/icons/icon.png"));
}

QWidget* Plugin_CustomDelegateDemo::createInstance(QWidget* parent,Qt::WindowFlags flags) const
{
  QWidget* result = nullptr;

  if(CustomDelegateDemo* widget_instance = new CustomDelegateDemo(parent,flags))
  {
    result = widget_instance;
  }

  return result;
}

extern "C"
{
  CustomDelegateDemo_API Plugin_CustomDelegateDemo* getPlugin()
  {
    static Plugin_CustomDelegateDemo plugin_instance;
    return &plugin_instance;
  }
}
