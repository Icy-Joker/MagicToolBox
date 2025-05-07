#include "stdafx.h"

#include "Plugin_XmlVisualEditor.h"

#include <XmlVisualEditor/XmlVisualEditor.h>

const char* Plugin_XmlVisualEditor::getName() const
{
  return "XmlVisualEditor";
}

const char* Plugin_XmlVisualEditor::getDescription() const
{
  return "XmlVisualEditor";
}

const char* Plugin_XmlVisualEditor::getType() const
{
  return "常规";
}

QIcon Plugin_XmlVisualEditor::getIcon() const
{
  return (QIcon(":/icons/icon.png"));
}

QWidget* Plugin_XmlVisualEditor::createInstance(QWidget* parent,Qt::WindowFlags flags) const
{
  QWidget* result = nullptr;

  if(XmlVisualEditor* widget_instance = new XmlVisualEditor(parent,flags))
  {
    result = widget_instance;
  }

  return result;
}

extern "C"
{
  XmlVisualEditor_API Plugin_XmlVisualEditor* getPlugin()
  {
    static Plugin_XmlVisualEditor plugin_instance;
    return &plugin_instance;
  }
}
