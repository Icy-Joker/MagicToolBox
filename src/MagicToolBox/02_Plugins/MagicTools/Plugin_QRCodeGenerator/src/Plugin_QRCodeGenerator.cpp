#include "stdafx.h"

#include "Plugin_QRCodeGenerator.h"

#include <QRCodeGenerator/QRCodeGenerator.h>

const char* Plugin_QRCodeGenerator::getName() const
{
  return "QRCodeGenerator";
}

const char* Plugin_QRCodeGenerator::getDescription() const
{
  return "QRCodeGenerator";
}

const char* Plugin_QRCodeGenerator::getType() const
{
  return "常规";
}

QIcon Plugin_QRCodeGenerator::getIcon() const
{
  return (QIcon(":/icons/icon.png"));
}

QWidget* Plugin_QRCodeGenerator::createInstance(QWidget* parent,Qt::WindowFlags flags) const
{
  QWidget* result = nullptr;

  if(QRCodeGenerator* widget_instance = new QRCodeGenerator(parent,flags))
  {
    result = widget_instance;
  }

  return result;
}

extern "C"
{
  QRCodeGenerator_API Plugin_QRCodeGenerator* getPlugin()
  {
    static Plugin_QRCodeGenerator plugin_instance;
    return &plugin_instance;
  }
}
