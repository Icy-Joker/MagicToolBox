#pragma once

#ifndef QRCODEGENERATOR_H
# define QRCODEGENERATOR_H

#include <QMainWindow>

namespace Ui
{
  class QRCodeGenerator;
}

class QRCodeGenerator : public QMainWindow
{
  Q_OBJECT
public:
  explicit QRCodeGenerator(QWidget* parent = nullptr,Qt::WindowFlags flags = Qt::WindowFlags());
  ~QRCodeGenerator() override;
private
  slots:
  void on_pushButton_GenerateQRCode_clicked();
private:
  Ui::QRCodeGenerator* ui;
};

#endif//!QRCODEGENERATOR_H
