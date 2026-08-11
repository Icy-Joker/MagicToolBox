#pragma once

#ifndef PLUGIN_BASE64CONVERTER_H
# define PLUGIN_BASE64CONVERTER_H

#include <MagicToolBox/MagicTool.h>

#include <QWidget>

class Plugin_Base64Converter : public MagicTool
{
public:
  explicit Plugin_Base64Converter();
  ~Plugin_Base64Converter() override;
public:
  QWidget* createInstance(QWidget* parent = nullptr,Qt::WindowFlags flags = Qt::WindowFlags()) const override;
};

#endif//!PLUGIN_BASE64CONVERTER_H
