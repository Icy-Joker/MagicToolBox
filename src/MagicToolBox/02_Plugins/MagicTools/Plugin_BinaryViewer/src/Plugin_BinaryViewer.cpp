#include "stdafx.h"

#include "Plugin_BinaryViewer.h"

#include <BinaryViewer/BinaryViewer.h>

Plugin_BinaryViewer::Plugin_BinaryViewer()
{
  this->setName("BinaryViewer");
  this->setDescription("BinaryViewer");
  this->setType("未分类");
  this->setIcon(QIcon(":/BinaryViewer/BinaryViewer.png"));
}

Plugin_BinaryViewer::~Plugin_BinaryViewer()
{
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
