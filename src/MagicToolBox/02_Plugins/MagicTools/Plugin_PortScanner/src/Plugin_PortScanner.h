#pragma once

#ifndef PLUGIN_PORTSCANNER_H
# define PLUGIN_PORTSCANNER_H

#include <MagicToolBox/MagicTool.h>

#include <QWidget>

class Plugin_PortScanner : public MagicTool
{
public:
  Plugin_PortScanner() = default;
  ~Plugin_PortScanner() override = default;
public:
  const char* getName() const override;
  const char* getDescription() const override;
  const char* getType() const override;
  QIcon getIcon() const override;
public:
  QWidget* createInstance(QWidget* parent = nullptr,Qt::WindowFlags flags = Qt::WindowFlags()) const override;
};

#endif//!PLUGIN_PORTSCANNER_H
