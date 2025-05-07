#include "stdafx.h"

#include "Plugin_CryptologyTool.h"

#include <CryptologyTool/CryptologyTool.h>

const char* Plugin_CryptologyTool::getName() const
{
  return "CryptologyTool";
}

const char* Plugin_CryptologyTool::getDescription() const
{
  return "CryptologyTool";
}

const char* Plugin_CryptologyTool::getType() const
{
  return "常规";
}

QIcon Plugin_CryptologyTool::getIcon() const
{
  return QIcon(":/icons/icon.png");
}

QWidget* Plugin_CryptologyTool::createInstance(QWidget* parent,Qt::WindowFlags flags) const
{
  QWidget* result = nullptr;

  if(CryptologyTool* widget_instance = new CryptologyTool(parent,flags))
  {
    result = widget_instance;
  }

  return result;
}

extern "C"
{
  Plugin_CryptologyTool* getPlugin()
  {
    static Plugin_CryptologyTool plugin_instance;
    return &plugin_instance;
  }
}
