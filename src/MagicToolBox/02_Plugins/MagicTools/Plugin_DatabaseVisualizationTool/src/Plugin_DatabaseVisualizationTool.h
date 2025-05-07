#pragma once

#ifndef PLUGIN_DATABASEVISUALIZATIONTOOL_H
# define PLUGIN_DATABASEVISUALIZATIONTOOL_H

#include <MagicToolBox/MagicTool.h>

#include <QWidget>

class Plugin_DatabaseVisualizationTool : public MagicTool
{
public:
  Plugin_DatabaseVisualizationTool() = default;
  ~Plugin_DatabaseVisualizationTool() override = default;
public:
  const char* getName() const override;
  const char* getDescription() const override;
  const char* getType() const override;
  QIcon getIcon() const override;
public:
  QWidget* createInstance(QWidget* parent = nullptr,Qt::WindowFlags flags = Qt::WindowFlags()) const override;
};

#endif//!PLUGIN_DATABASEVISUALIZATIONTOOL_H
