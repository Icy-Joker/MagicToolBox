#pragma once

#ifndef NETWORKTOOL_H
# define NETWORKTOOL_H

#include <QMainWindow>

namespace Ui
{
  class NetworkTool;
}

class NetworkTool : public QMainWindow
{
  Q_OBJECT
public:
  explicit NetworkTool(QWidget* parent = nullptr,Qt::WindowFlags flags = Qt::WindowFlags());
  ~NetworkTool() override;
private:
  Ui::NetworkTool* ui;
};

#endif//!NETWORKTOOL_H
