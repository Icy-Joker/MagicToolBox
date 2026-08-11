#pragma once

#ifndef PLUGIN_DATABASEVISUALIZATIONTOOL_H
# define PLUGIN_DATABASEVISUALIZATIONTOOL_H

#include <MagicToolBox/MagicTool.h>

#include <QWidget>

class Plugin_DatabaseVisualizationTool : public MagicTool
{
public:
  explicit Plugin_DatabaseVisualizationTool();
  ~Plugin_DatabaseVisualizationTool() override;
public:
  QWidget* createInstance(QWidget* parent = nullptr,Qt::WindowFlags flags = Qt::WindowFlags()) const override;
};

#endif//!PLUGIN_DATABASEVISUALIZATIONTOOL_H
