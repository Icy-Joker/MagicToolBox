#include "stdafx.h"

#include "Plugin_IdentifyCardNumberChecker.h"

#include <IdentifyCardNumberChecker/IdentifyCardNumberChecker.h>

const char* Plugin_IdentifyCardNumberChecker::getName() const
{
  return "IdentifyCardNumberChecker";
}

const char* Plugin_IdentifyCardNumberChecker::getDescription() const
{
  return "IdentifyCardNumberChecker";
}

const char* Plugin_IdentifyCardNumberChecker::getType() const
{
  return "常规";
}

QIcon Plugin_IdentifyCardNumberChecker::getIcon() const
{
  return (QIcon(":/icons/icon.png"));
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
