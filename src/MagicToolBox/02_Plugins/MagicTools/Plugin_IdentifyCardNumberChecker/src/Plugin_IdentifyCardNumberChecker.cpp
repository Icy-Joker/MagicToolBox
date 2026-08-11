#include "stdafx.h"

#include "Plugin_IdentifyCardNumberChecker.h"

#include <IdentifyCardNumberChecker/IdentifyCardNumberChecker.h>

Plugin_IdentifyCardNumberChecker::Plugin_IdentifyCardNumberChecker()
{
  this->setName("IdentifyCardNumberChecker");
  this->setDescription("IdentifyCardNumberChecker");
  this->setType("未分类");
  this->setIcon(QIcon(":/IdentifyCardNumberChecker/IdentifyCardNumberChecker.png"));
}

Plugin_IdentifyCardNumberChecker::~Plugin_IdentifyCardNumberChecker()
{
}

QWidget* Plugin_IdentifyCardNumberChecker::createInstance(QWidget* parent,Qt::WindowFlags flags) const
{
  QWidget* result = nullptr;

  if(IdentifyCardNumberChecker* widget_instance = new IdentifyCardNumberChecker(parent,flags))
  {
    result = widget_instance;
  }

  return result;
}

extern "C"
{
  IdentifyCardNumberChecker_API Plugin_IdentifyCardNumberChecker* getPlugin()
  {
    static Plugin_IdentifyCardNumberChecker plugin_instance;
    return &plugin_instance;
  }
}
