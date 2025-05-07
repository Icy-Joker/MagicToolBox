#pragma once

#ifndef PLUGIN_IDENTIFYCARDNUMBERCHECKER_H
# define PLUGIN_IDENTIFYCARDNUMBERCHECKER_H

#include <MagicToolBox/MagicTool.h>

#include <QWidget>

class Plugin_SerialPortDebugger : public MagicTool
{
public:
  Plugin_SerialPortDebugger() = default;
  ~Plugin_SerialPortDebugger() override = default;
public:
  const char* getName() const override;
  const char* getDescription() const override;
  const char* getType() const override;
  QIcon getIcon() const override;
public:
  QWidget* createInstance(QWidget* parent = nullptr,Qt::WindowFlags flags = Qt::WindowFlags()) const override;
};

#endif//!PLUGIN_IDENTIFYCARDNUMBERCHECKER_H
