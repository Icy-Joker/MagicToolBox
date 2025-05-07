#pragma once

#ifndef PLUGIN_BINARYVIEWER_H
# define PLUGIN_BINARYVIEWER_H

#include <MagicToolBox/MagicTool.h>

#include <QWidget>

class Plugin_BinaryViewer : public MagicTool
{
public:
  Plugin_BinaryViewer() = default;
  ~Plugin_BinaryViewer() override = default;
public:
  const char* getName() const override;
  const char* getDescription() const override;
  const char* getType() const override;
  QIcon getIcon() const override;
public:
  QWidget* createInstance(QWidget* parent = nullptr,Qt::WindowFlags flags = Qt::WindowFlags()) const override;
};

#endif//!PLUGIN_BINARYVIEWER_H
