#pragma once

#ifndef PLUGIN_GRAPHICSVIEWDEMO_H
# define PLUGIN_GRAPHICSVIEWDEMO_H

#include <MagicToolBox/MagicTool.h>

#include <QWidget>

class Plugin_GraphicsViewDemo : public MagicTool
{
public:
  Plugin_GraphicsViewDemo() = default;
  ~Plugin_GraphicsViewDemo() override = default;
public:
  const char* getName() const override;
  const char* getDescription() const override;
  const char* getType() const override;
  QIcon getIcon() const override;
public:
  QWidget* createInstance(QWidget* parent = nullptr,Qt::WindowFlags flags = Qt::WindowFlags()) const override;
};

#endif//!PLUGIN_GRAPHICSVIEWDEMO_H
