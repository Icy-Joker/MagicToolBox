#include "stdafx.h"

#include "Plugin_JsonVisualEditor.h"

#include <JsonVisualEditor/JsonVisualEditor.h>

Plugin_JsonVisualEditor::Plugin_JsonVisualEditor()
{
  this->setName("JsonVisualEditor");
  this->setDescription("JsonVisualEditor");
  this->setType("未分类");
  this->setIcon(QIcon(":/JsonVisualEditor/JsonVisualEditor.png"));
}

Plugin_JsonVisualEditor::~Plugin_JsonVisualEditor()
{
}

QWidget* Plugin_JsonVisualEditor::createInstance(QWidget* parent,Qt::WindowFlags flags) const
{
  QWidget* result = nullptr;

  if(JsonVisualEditor* widget_instance = new JsonVisualEditor(parent,flags))
  {
    result = widget_instance;
  }

  return result;
}

extern "C"
{
  JsonVisualEditor_API Plugin_JsonVisualEditor* getPlugin()
  {
    static Plugin_JsonVisualEditor plugin_instance;
    return &plugin_instance;
  }
}
