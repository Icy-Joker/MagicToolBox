#pragma once

#ifndef PLUGIN_CRYPTOLOGYTOOL_H
# define PLUGIN_CRYPTOLOGYTOOL_H

#include <MagicToolBox/MagicTool.h>

#include <QWidget>

class Plugin_CryptologyTool : public MagicTool
{
public:
  Plugin_CryptologyTool() = default;
  ~Plugin_CryptologyTool() override = default;
public:
  const char* getName() const override;
  const char* getDescription() const override;
  const char* getType() const override;
  QIcon getIcon() const override;
public:
  QWidget* createInstance(QWidget* parent = nullptr,Qt::WindowFlags flags = Qt::WindowFlags()) const override;
};

#endif//!PLUGIN_CRYPTOLOGYTOOL_H
