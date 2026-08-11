#include "stdafx.h"

#include "Plugin_XmlVisualEditor.h"

#include <XmlVisualEditor/XmlVisualEditor.h>

Plugin_XmlVisualEditor::Plugin_XmlVisualEditor()
{
  this->setName("XmlVisualEditor");
  this->setDescription("XmlVisualEditor");
  this->setType("未分类" );
  this->setIcon(QIcon(":/XmlVisualEditor/XmlVisualEditor.png"));
}

Plugin_XmlVisualEditor::~Plugin_XmlVisualEditor()
{
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
