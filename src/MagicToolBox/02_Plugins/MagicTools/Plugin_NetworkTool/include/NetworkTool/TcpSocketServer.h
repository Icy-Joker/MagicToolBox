#pragma once

#ifndef TCPSOCKETSERVER_H
# define TCPSOCKETSERVER_H

#include <QWidget>

class QTcpServer;

namespace Ui
{
  class TcpSocketServer;
}

class TcpSocketServer : public QWidget
{
  Q_OBJECT
public:
  explicit TcpSocketServer(QWidget* parent = nullptr);
  ~TcpSocketServer() override;
private
  slots:
  void on_pushButton_ServerControl_clicked();
  void on_pushButton_SendMessage_clicked();
private
  slots:
  void slot_newConnection();
  void slot_readyRead();
private:
  Ui::TcpSocketServer* ui;

  QTcpServer* tcp_socket_server;
};

#endif//!TCPSOCKETSERVER_H
