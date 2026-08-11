#pragma once

#ifndef PLUGIN_XMLVISUALEDITOR_H
# define PLUGIN_XMLVISUALEDITOR_H

#include <MagicToolBox/MagicTool.h>

#include <QWidget>

class Plugin_XmlVisualEditor : public MagicTool
{
public:
  explicit Plugin_XmlVisualEditor();
  ~Plugin_XmlVisualEditor() override;
public:
  QWidget* createInstance(QWidget* parent = nullptr,Qt::WindowFlags flags = Qt::WindowFlags()) const override;
};

#endif//!PLUGIN_XMLVISUALEDITOR_H
