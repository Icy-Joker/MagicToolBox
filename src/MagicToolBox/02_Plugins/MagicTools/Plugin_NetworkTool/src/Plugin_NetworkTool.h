#pragma once

#ifndef PLUGIN_NETWORKTOOL_H
# define PLUGIN_NETWORKTOOL_H

#include <MagicToolBox/MagicTool.h>

#include <QWidget>

class Plugin_NetworkTool : public MagicTool
{
public:
  Plugin_NetworkTool() = default;
  ~Plugin_NetworkTool() override = default;
public:
  const char* getName() const override;
  const char* getDescription() const override;
  const char* getType() const override;
  QIcon getIcon() const override;
public:
  QWidget* createInstance(QWidget* parent = nullptr,Qt::WindowFlags flags = Qt::WindowFlags()) const override;
};

#endif//!PLUGIN_NETWORKTOOL_H
