#pragma once

#ifndef PLUGIN_PORTSCANNER_H
# define PLUGIN_PORTSCANNER_H

#include <MagicToolBox/MagicTool.h>

#include <QWidget>

class Plugin_PortScanner : public MagicTool
{
public:
  explicit Plugin_PortScanner();
  ~Plugin_PortScanner() override;
public:
  QWidget* createInstance(QWidget* parent = nullptr,Qt::WindowFlags flags = Qt::WindowFlags()) const override;
};

#endif//!PLUGIN_PORTSCANNER_H
