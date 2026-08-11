#include "stdafx.h"

#include "Plugin_CustomDelegateDemo.h"

#include <CustomDelegateDemo/CustomDelegateDemo.h>

Plugin_CustomDelegateDemo::Plugin_CustomDelegateDemo()
{
  this->setName("CustomDelegateDemo");
  this->setDescription("CustomDelegateDemo");
  this->setType("未分类");
  this->setIcon(QIcon(":/CustomDelegateDemo/CustomDelegateDemo.png"));
}

Plugin_CustomDelegateDemo::~Plugin_CustomDelegateDemo()
{
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
