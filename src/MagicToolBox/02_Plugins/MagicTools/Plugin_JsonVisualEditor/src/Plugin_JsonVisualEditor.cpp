#include "stdafx.h"

#include "Plugin_JsonVisualEditor.h"

#include <JsonVisualEditor/JsonVisualEditor.h>

const char* Plugin_JsonVisualEditor::getName() const
{
  return "JsonVisualEditor";
}

const char* Plugin_JsonVisualEditor::getDescription() const
{
  return "JsonVisualEditor";
}

const char* Plugin_JsonVisualEditor::getType() const
{
  return "常规";
}

QIcon Plugin_JsonVisualEditor::getIcon() const
{
  return (QIcon(":/icons/icon.png"));
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
