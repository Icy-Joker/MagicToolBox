#pragma once

#ifndef HTTPCLIENT_H
# define HTTPCLIENT_H

#include <QWidget>

namespace Ui
{
  class HttpClient;
}

class HttpClient : public QWidget
{
  Q_OBJECT
public:
  explicit HttpClient(QWidget* parent = nullptr);
  ~HttpClient() override;
private
  slots:
  void on_lineEdit_RequestURL_editingFinished();
  void on_pushButton_SendRequest_clicked();
private:
  Ui::HttpClient* ui;
};

#endif//!HTTPCLIENT_H
