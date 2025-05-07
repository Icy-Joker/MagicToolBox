#pragma once

#ifndef PLUGIN_BASE64CONVERTER_H
# define PLUGIN_BASE64CONVERTER_H

#include <MagicToolBox/MagicTool.h>

#include <QWidget>

class Plugin_Base64Converter : public MagicTool
{
public:
  Plugin_Base64Converter() = default;
  ~Plugin_Base64Converter() override = default;
public:
  const char* getName() const override;
  const char* getDescription() const override;
  const char* getType() const override;
  QIcon getIcon() const override;
public:
  QWidget* createInstance(QWidget* parent = nullptr,Qt::WindowFlags flags = Qt::WindowFlags()) const override;
};

#endif//!PLUGIN_BASE64CONVERTER_H
