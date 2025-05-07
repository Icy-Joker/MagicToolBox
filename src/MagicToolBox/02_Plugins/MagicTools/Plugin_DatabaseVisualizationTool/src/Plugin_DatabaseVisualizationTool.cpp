#include "stdafx.h"

#include "Plugin_DatabaseVisualizationTool.h"

#include <DatabaseVisualizationTool/DatabaseVisualizationTool.h>

const char* Plugin_DatabaseVisualizationTool::getName() const
{
  return "DatabaseVisualizationTool";
}

const char* Plugin_DatabaseVisualizationTool::getDescription() const
{
  return "DatabaseVisualizationTool";
}

const char* Plugin_DatabaseVisualizationTool::getType() const
{
  return "常规";
}

QIcon Plugin_DatabaseVisualizationTool::getIcon() const
{
  return (QIcon(":/icons/icon.png"));
}

QWidget* Plugin_DatabaseVisualizationTool::createInstance(QWidget* parent,Qt::WindowFlags flags) const
{
  QWidget* result = nullptr;

  if(DatabaseVisualizationTool* widget_instance = new DatabaseVisualizationTool(parent,flags))
  {
    result = widget_instance;
  }

  return result;
}

extern "C"
{
  DatabaseVisualizationTool_API Plugin_DatabaseVisualizationTool* getPlugin()
  {
    static Plugin_DatabaseVisualizationTool plugin_instance;
    return &plugin_instance;
  }
}
