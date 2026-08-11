#pragma once

#ifndef PLUGIN_CUSTOMDELEGATEDEMO_H
# define PLUGIN_CUSTOMDELEGATEDEMO_H

#include <MagicToolBox/MagicTool.h>

#include <QWidget>

class Plugin_CustomDelegateDemo : public MagicTool
{
public:
  explicit Plugin_CustomDelegateDemo();
  ~Plugin_CustomDelegateDemo() override;
public:
  QWidget* createInstance(QWidget* parent = nullptr,Qt::WindowFlags flags = Qt::WindowFlags()) const override;
};

#endif//!PLUGIN_CUSTOMDELEGATEDEMO_H
