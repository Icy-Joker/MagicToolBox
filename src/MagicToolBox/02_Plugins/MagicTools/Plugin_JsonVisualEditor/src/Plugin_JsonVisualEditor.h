#pragma once

#ifndef PLUGIN_JSONVISUALEDITOR_H
# define PLUGIN_JSONVISUALEDITOR_H

#include <MagicToolBox/MagicTool.h>

#include <QWidget>

class Plugin_JsonVisualEditor : public MagicTool
{
public:
  explicit Plugin_JsonVisualEditor();
  ~Plugin_JsonVisualEditor() override;
public:
  QWidget* createInstance(QWidget* parent = nullptr,Qt::WindowFlags flags = Qt::WindowFlags()) const override;
};

#endif//!PLUGIN_JSONVISUALEDITOR_H
