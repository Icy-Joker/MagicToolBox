#pragma once

#ifndef PLUGIN_XMLVISUALEDITOR_H
# define PLUGIN_XMLVISUALEDITOR_H

#include <MagicToolBox/MagicTool.h>

#include <QWidget>

class Plugin_XmlVisualEditor : public MagicTool
{
public:
  Plugin_XmlVisualEditor() = default;
  ~Plugin_XmlVisualEditor() override = default;
public:
  const char* getName() const override;
  const char* getDescription() const override;
  const char* getType() const override;
  QIcon getIcon() const override;
public:
  QWidget* createInstance(QWidget* parent = nullptr,Qt::WindowFlags flags = Qt::WindowFlags()) const override;
};

#endif//!PLUGIN_XMLVISUALEDITOR_H
