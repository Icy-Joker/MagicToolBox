#pragma once

#ifndef PLUGIN_REGULAREXPRESSIONVALIDATOR_H
# define PLUGIN_REGULAREXPRESSIONVALIDATOR_H

#include <MagicToolBox/MagicTool.h>

#include <QWidget>

class Plugin_RegularExpressionValidator : public MagicTool
{
public:
  Plugin_RegularExpressionValidator() = default;
  ~Plugin_RegularExpressionValidator() override = default;
public:
  const char* getName() const override;
  const char* getDescription() const override;
  const char* getType() const override;
  QIcon getIcon() const override;
public:
  QWidget* createInstance(QWidget* parent = nullptr,Qt::WindowFlags flags = Qt::WindowFlags()) const override;
};

#endif//!PLUGIN_REGULAREXPRESSIONVALIDATOR_H
