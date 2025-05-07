#pragma once

#ifndef PLUGIN_QRCODEGENERATOR_H
# define PLUGIN_QRCODEGENERATOR_H

#include <MagicToolBox/MagicTool.h>

#include <QWidget>

class Plugin_QRCodeGenerator : public MagicTool
{
public:
  Plugin_QRCodeGenerator() = default;
  ~Plugin_QRCodeGenerator() override = default;
public:
  const char* getName() const override;
  const char* getDescription() const override;
  const char* getType() const override;
  QIcon getIcon() const override;
public:
  QWidget* createInstance(QWidget* parent = nullptr,Qt::WindowFlags flags = Qt::WindowFlags()) const override;
};

#endif//!PLUGIN_QRCODEGENERATOR_H
