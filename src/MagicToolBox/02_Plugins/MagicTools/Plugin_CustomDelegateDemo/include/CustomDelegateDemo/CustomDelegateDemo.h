#pragma once

#ifndef CUSTOMDELEGATEDEMO_H
# define CUSTOMDELEGATEDEMO_H

#include <QMainWindow>

namespace Ui
{
  class CustomDelegateDemo;
}

class CustomDelegateDemo : public QMainWindow
{
  Q_OBJECT
public:
  explicit CustomDelegateDemo(QWidget* parent = nullptr,Qt::WindowFlags flags = Qt::WindowFlags());
  ~CustomDelegateDemo() override;
private:
  Ui::CustomDelegateDemo* ui;
};

#endif//!CUSTOMDELEGATEDEMO_H
