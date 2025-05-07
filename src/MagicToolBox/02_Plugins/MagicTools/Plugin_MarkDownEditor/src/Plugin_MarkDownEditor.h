#pragma once

#ifndef PLUGIN_MARKDOWNEDITOR_H
# define PLUGIN_MARKDOWNEDITOR_H

#include <MagicToolBox/MagicTool.h>

#include <QWidget>

class Plugin_MarkDownEditor : public MagicTool
{
public:
  Plugin_MarkDownEditor() = default;
  ~Plugin_MarkDownEditor() override = default;
public:
  const char* getName() const override;
  const char* getDescription() const override;
  const char* getType() const override;
  QIcon getIcon() const override;
public:
  QWidget* createInstance(QWidget* parent = nullptr,Qt::WindowFlags flags = Qt::WindowFlags()) const override;
};

#endif//!PLUGIN_MARKDOWNEDITOR_H
