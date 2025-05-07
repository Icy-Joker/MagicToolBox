#include "stdafx.h"

#include "Plugin_MarkDownEditor.h"

#include <MarkDownEditor/MarkDownEditor.h>

const char* Plugin_MarkDownEditor::getName() const
{
  return "MarkDownEditor";
}

const char* Plugin_MarkDownEditor::getDescription() const
{
  return "MarkDownEditor";
}

const char* Plugin_MarkDownEditor::getType() const
{
  return "常规";
}

QIcon Plugin_MarkDownEditor::getIcon() const
{
  return (QIcon(":/icons/icon.png"));
}

QWidget* Plugin_MarkDownEditor::createInstance(QWidget* parent,Qt::WindowFlags flags) const
{
  QWidget* result = nullptr;

  if(MarkDownEditor* widget_instance = new MarkDownEditor(parent,flags))
  {
    result = widget_instance;
  }

  return result;
}

extern "C"
{
  Plugin_MarkDownEditor* getPlugin()
  {
    static Plugin_MarkDownEditor plugin_instance;
    return &plugin_instance;
  }
}
