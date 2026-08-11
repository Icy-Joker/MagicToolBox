#include "stdafx.h"

#include "Plugin_StyleSheetViewer.h"

#include <StyleSheetViewer/StyleSheetViewer.h>

Plugin_StyleSheetViewer::Plugin_StyleSheetViewer()
{
  this->setName("StyleSheetViewer");
  this->setDescription("StyleSheetViewer");
  this->setType("未分类" );
  this->setIcon(QIcon(":/StyleSheetViewer/StyleSheetViewer.png"));
}

Plugin_StyleSheetViewer::~Plugin_StyleSheetViewer()
{
}

QWidget* Plugin_StyleSheetViewer::createInstance(QWidget* parent,Qt::WindowFlags flags) const
{
  QWidget* result = nullptr;

  if(StyleSheetViewer* widget_instance = new StyleSheetViewer(parent,flags))
  {
    result = widget_instance;
  }

  return result;
}

extern "C"
{
  StyleSheetViewer_API Plugin_StyleSheetViewer* getPlugin()
  {
    static Plugin_StyleSheetViewer plugin_instance;
    return &plugin_instance;
  }
}
