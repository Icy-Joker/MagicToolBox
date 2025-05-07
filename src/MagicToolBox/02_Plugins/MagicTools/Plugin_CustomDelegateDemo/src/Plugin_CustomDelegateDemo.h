#pragma once

#ifndef PLUGIN_CUSTOMDELEGATEDEMO_H
# define PLUGIN_CUSTOMDELEGATEDEMO_H

#include <MagicToolBox/MagicTool.h>

#include <QWidget>

class Plugin_CustomDelegateDemo : public MagicTool
{
public:
  Plugin_CustomDelegateDemo() = default;
  ~Plugin_CustomDelegateDemo() override = default;
public:
  const char* getName() const override;
  const char* getDescription() const override;
  const char* getType() const override;
  QIcon getIcon() const override;
public:
  QWidget* createInstance(QWidget* parent = nullptr,Qt::WindowFlags flags = Qt::WindowFlags()) const override;
};

#endif//!PLUGIN_CUSTOMDELEGATEDEMO_H
