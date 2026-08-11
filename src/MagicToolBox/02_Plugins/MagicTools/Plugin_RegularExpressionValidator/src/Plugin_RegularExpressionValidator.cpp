#include "stdafx.h"

#include "Plugin_RegularExpressionValidator.h"

#include <RegularExpressionValidator/RegularExpressionValidator.h>

Plugin_RegularExpressionValidator::Plugin_RegularExpressionValidator()
{
  this->setName("RegularExpressionValidator");
  this->setDescription("RegularExpressionValidator");
  this->setType("未分类" );
  this->setIcon(QIcon(":/RegularExpressionValidator/RegularExpressionValidator.png"));
}

Plugin_RegularExpressionValidator::~Plugin_RegularExpressionValidator()
{
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
