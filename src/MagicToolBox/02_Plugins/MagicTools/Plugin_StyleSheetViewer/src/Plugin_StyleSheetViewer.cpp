#include "stdafx.h"

#include "Plugin_StyleSheetViewer.h"

#include <StyleSheetViewer/StyleSheetViewer.h>

const char* Plugin_StyleSheetViewer::getName() const
{
  return "StyleSheetViewer";
}

const char* Plugin_StyleSheetViewer::getDescription() const
{
  return "StyleSheetViewer";
}

const char* Plugin_StyleSheetViewer::getType() const
{
  return "常规";
}

QIcon Plugin_StyleSheetViewer::getIcon() const
{
  return (QIcon(":/icons/icon.png"));
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
