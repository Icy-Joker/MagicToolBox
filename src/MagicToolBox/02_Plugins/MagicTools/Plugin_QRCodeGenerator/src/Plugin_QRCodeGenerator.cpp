#include "stdafx.h"

#include "Plugin_QRCodeGenerator.h"

#include <QRCodeGenerator/QRCodeGenerator.h>

Plugin_QRCodeGenerator::Plugin_QRCodeGenerator()
{
  this->setName("QRCodeGenerator");
  this->setDescription("QRCodeGenerator");
  this->setType("未分类" );
  this->setIcon(QIcon(":/QRCodeGenerator/QRCodeGenerator.png"));
}

Plugin_QRCodeGenerator::~Plugin_QRCodeGenerator()
{
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
