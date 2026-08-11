#pragma once

#ifndef PLUGIN_BINARYVIEWER_H
# define PLUGIN_BINARYVIEWER_H

#include <MagicToolBox/MagicTool.h>

#include <QWidget>

class Plugin_BinaryViewer : public MagicTool
{
public:
  explicit Plugin_BinaryViewer();
  ~Plugin_BinaryViewer() override;
public:
  QWidget* createInstance(QWidget* parent = nullptr,Qt::WindowFlags flags = Qt::WindowFlags()) const override;
};

#endif//!PLUGIN_BINARYVIEWER_H
