#pragma once

#ifndef STRUCTDEFINITIONWIDGET_H
# define STRUCTDEFINITIONWIDGET_H

#include <QWidget>

namespace Ui
{
  class StructDefinitionWidget;
}

class StructDefinitionWidget : public QWidget
{
  Q_OBJECT
public:
  explicit StructDefinitionWidget(QWidget* parent = nullptr);
  ~StructDefinitionWidget() override;
private:
  Ui::StructDefinitionWidget* ui;
};

#endif//!STRUCTDEFINITIONWIDGET_H
