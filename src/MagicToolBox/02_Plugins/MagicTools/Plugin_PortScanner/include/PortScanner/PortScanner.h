#pragma once

#ifndef PORTSCANNER_H
# define PORTSCANNER_H

#include <QMainWindow>

namespace Ui
{
  class PortScanner;
}

class PortScanner : public QMainWindow
{
public:
  Q_OBJECT
public:
  explicit PortScanner(QWidget* parent = nullptr,Qt::WindowFlags flags = Qt::WindowFlags());
  ~PortScanner();
private
  slots:
  void on_pushButton_Scan_clicked();
private:
  Ui::PortScanner* ui;
};

#endif//!PORTSCANNER_H
