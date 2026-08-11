#pragma once

#ifndef UDPSOCKETSERVER_H
# define UDPSOCKETSERVER_H

#include <QWidget>

class QUdpSocket;

namespace Ui
{
  class UdpSocketServer;
}

class UdpSocketServer : public QWidget
{
  Q_OBJECT
public:
  explicit UdpSocketServer(QWidget* parent = nullptr);
  ~UdpSocketServer() override;
private
  slots:
  void on_pushButton_ServerControl_clicked();
private
  slots:
  void slot_readyRead();
private:
  Ui::UdpSocketServer* ui;

  QUdpSocket* udp_socket_server;
};

#endif//!UDPSOCKETSERVER_H
