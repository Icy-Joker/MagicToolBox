#pragma once

#ifndef PLUGIN_MARKDOWNEDITOR_H
# define PLUGIN_MARKDOWNEDITOR_H

#include <MagicToolBox/MagicTool.h>

#include <QWidget>

class Plugin_MarkDownEditor : public MagicTool
{
public:
  explicit Plugin_MarkDownEditor();
  ~Plugin_MarkDownEditor() override;
public:
  QWidget* createInstance(QWidget* parent = nullptr,Qt::WindowFlags flags = Qt::WindowFlags()) const override;
};

#endif//!PLUGIN_MARKDOWNEDITOR_H
