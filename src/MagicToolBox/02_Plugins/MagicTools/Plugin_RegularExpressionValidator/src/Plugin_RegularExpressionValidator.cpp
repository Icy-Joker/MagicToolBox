#include "stdafx.h"

#include "Plugin_RegularExpressionValidator.h"

#include <RegularExpressionValidator/RegularExpressionValidator.h>

const char* Plugin_RegularExpressionValidator::getName() const
{
  return "RegularExpressionValidator";
}

const char* Plugin_RegularExpressionValidator::getDescription() const
{
  return "RegularExpressionValidator";
}

const char* Plugin_RegularExpressionValidator::getType() const
{
  return "常规";
}

QIcon Plugin_RegularExpressionValidator::getIcon() const
{
  return (QIcon(":/icons/icon.png"));
}

QWidget* Plugin_RegularExpressionValidator::createInstance(QWidget* parent,Qt::WindowFlags flags) const
{
  QWidget* result = nullptr;

  if(RegularExpressionValidator* widget_instance = new RegularExpressionValidator(parent,flags))
  {
    result = widget_instance;
  }

  return result;
}

extern "C"
{
  RegularExpressionValidator_API Plugin_RegularExpressionValidator* getPlugin()
  {
    static Plugin_RegularExpressionValidator plugin_instance;
    return &plugin_instance;
  }
}
