#pragma once

#ifndef PLUGIN_JSONVISUALEDITOR_H
# define PLUGIN_JSONVISUALEDITOR_H

#include <MagicToolBox/MagicTool.h>

#include <QWidget>

class Plugin_JsonVisualEditor : public MagicTool
{
public:
  Plugin_JsonVisualEditor() = default;
  ~Plugin_JsonVisualEditor() override = default;
public:
  const char* getName() const override;
  const char* getDescription() const override;
  const char* getType() const override;
  QIcon getIcon() const override;
public:
  QWidget* createInstance(QWidget* parent = nullptr,Qt::WindowFlags flags = Qt::WindowFlags()) const override;
};

#endif//!PLUGIN_JSONVISUALEDITOR_H
