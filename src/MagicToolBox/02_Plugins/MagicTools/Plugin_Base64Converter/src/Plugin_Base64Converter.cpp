#include "stdafx.h"

#include "Plugin_Base64Converter.h"

#include <Base64Converter/Base64Converter.h>

Plugin_Base64Converter::Plugin_Base64Converter()
{
  this->setName("Base64Converter");
  this->setDescription("Base64Converter");
  this->setType("未分类");
  this->setIcon(QIcon(":/Base64Converter/Base64Converter.png"));
}

Plugin_Base64Converter::~Plugin_Base64Converter()
{
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
