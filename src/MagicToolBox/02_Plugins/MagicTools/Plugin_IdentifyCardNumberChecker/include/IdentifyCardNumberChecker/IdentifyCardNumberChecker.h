#pragma once

#ifndef IDENTIFYCARDNUMBERCHECKER_H
# define IDENTIFYCARDNUMBERCHECKER_H

#include <QMainWindow>

namespace Ui
{
  class IdentifyCardNumberChecker;
}

class IdentifyCardNumberChecker : public QMainWindow
{
  Q_OBJECT
public:
  explicit IdentifyCardNumberChecker(QWidget* parent = nullptr,Qt::WindowFlags flags = Qt::WindowFlags());
  ~IdentifyCardNumberChecker();
private
  slots:
  void on_pushButton_Check_clicked();
private:
  Ui::IdentifyCardNumberChecker* ui;
};

#endif//!IDENTIFYCARDNUMBERCHECKER_H
