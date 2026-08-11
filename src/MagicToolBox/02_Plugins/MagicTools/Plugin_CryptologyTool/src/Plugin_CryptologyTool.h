#pragma once

#ifndef PLUGIN_CRYPTOLOGYTOOL_H
# define PLUGIN_CRYPTOLOGYTOOL_H

#include <MagicToolBox/MagicTool.h>

#include <QWidget>

class Plugin_CryptologyTool : public MagicTool
{
public:
  explicit Plugin_CryptologyTool();
  ~Plugin_CryptologyTool() override;
public:
  QWidget* createInstance(QWidget* parent = nullptr,Qt::WindowFlags flags = Qt::WindowFlags()) const override;
};

#endif//!PLUGIN_CRYPTOLOGYTOOL_H
