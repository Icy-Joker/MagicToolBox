#pragma once

#ifndef PLUGIN_NETWORKTOOL_H
# define PLUGIN_NETWORKTOOL_H

#include <MagicToolBox/MagicTool.h>

#include <QWidget>

class Plugin_NetworkTool : public MagicTool
{
public:
  explicit Plugin_NetworkTool();
  ~Plugin_NetworkTool() override;
public:
  QWidget* createInstance(QWidget* parent = nullptr,Qt::WindowFlags flags = Qt::WindowFlags()) const override;
};

#endif//!PLUGIN_NETWORKTOOL_H
