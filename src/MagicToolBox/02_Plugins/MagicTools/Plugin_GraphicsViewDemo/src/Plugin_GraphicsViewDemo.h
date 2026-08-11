#pragma once

#ifndef PLUGIN_GRAPHICSVIEWDEMO_H
# define PLUGIN_GRAPHICSVIEWDEMO_H

#include <MagicToolBox/MagicTool.h>

#include <QWidget>

class Plugin_GraphicsViewDemo : public MagicTool
{
public:
  explicit Plugin_GraphicsViewDemo();
  ~Plugin_GraphicsViewDemo() override;
public:
  QWidget* createInstance(QWidget* parent = nullptr,Qt::WindowFlags flags = Qt::WindowFlags()) const override;
};

#endif//!PLUGIN_GRAPHICSVIEWDEMO_H
