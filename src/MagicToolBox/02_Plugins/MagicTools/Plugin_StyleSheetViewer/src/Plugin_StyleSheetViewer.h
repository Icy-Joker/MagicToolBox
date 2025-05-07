#pragma once

#ifndef PLUGIN_STYLESHEETVIEWER_H
# define PLUGIN_STYLESHEETVIEWER_H

#include <MagicToolBox/MagicTool.h>

#include <QWidget>

class Plugin_StyleSheetViewer : public MagicTool
{
public:
  Plugin_StyleSheetViewer() = default;
  ~Plugin_StyleSheetViewer() override = default;
public:
  const char* getName() const override;
  const char* getDescription() const override;
  const char* getType() const override;
  QIcon getIcon() const override;
public:
  QWidget* createInstance(QWidget* parent = nullptr,Qt::WindowFlags flags = Qt::WindowFlags()) const override;
};

#endif//!PLUGIN_STYLESHEETVIEWER_H
