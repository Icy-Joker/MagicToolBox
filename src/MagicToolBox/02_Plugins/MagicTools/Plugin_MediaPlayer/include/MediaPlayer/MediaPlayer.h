#pragma once

#ifndef MEDIAPLAYER_H
# define MEDIAPLAYER_H

#include <QMainWindow>
#include <QMediaPlayer>

namespace Ui
{
  class MediaPlayer;
}

class MediaPlayer : public QMainWindow
{
  Q_OBJECT
public:
  explicit MediaPlayer(QWidget* parent = nullptr,Qt::WindowFlags flags = Qt::WindowFlags());
  ~MediaPlayer() override;
protected:
  bool eventFilter(QObject* obj,QEvent* event) override;
private
  slots:
  void on_action_Load_triggered();
private:
  Ui::MediaPlayer* ui;

  QMediaPlayer* media_player;
};

#endif//!MEDIAPLAYER_H
