#include "stdafx.h"

#include "Plugin_BinaryViewer.h"

#include <BinaryViewer/BinaryViewer.h>

const char* Plugin_BinaryViewer::getName() const
{
  return "BinaryViewer";
}

const char* Plugin_BinaryViewer::getDescription() const
{
  return "BinaryViewer";
}

const char* Plugin_BinaryViewer::getType() const
{
  return "常规";
}

QIcon Plugin_BinaryViewer::getIcon() const
{
  return QIcon(":/icons/icon.png");
}

QWidget* Plugin_BinaryViewer::createInstance(QWidget* parent,Qt::WindowFlags flags) const
{
  QWidget* result = nullptr;

  if(BinaryViewer* widget_instance = new BinaryViewer(parent,flags))
  {
    result = widget_instance;
  }

  return result;
}

extern "C"
{
  Plugin_BinaryViewer* getPlugin()
  {
    static Plugin_BinaryViewer plugin_instance;
    return &plugin_instance;
  }
}
