#include "stdafx.h"

#include "Plugin_MediaPlayer.h"

#include <MediaPlayer/MediaPlayer.h>

Plugin_MediaPlayer::Plugin_MediaPlayer()
{
  this->setName("MediaPlayer");
  this->setDescription("MediaPlayer");
  this->setType("未分类");
  this->setIcon(QIcon(":/MediaPlayer/MediaPlayer.png"));
}

Plugin_MediaPlayer::~Plugin_MediaPlayer()
{
}

QWidget* Plugin_MediaPlayer::createInstance(QWidget* parent,Qt::WindowFlags flags) const
{
  QWidget* result = nullptr;

  if(MediaPlayer* widget_instance = new MediaPlayer(parent,flags))
  {
    result = widget_instance;
  }

  return result;
}

extern "C"
{
  MediaPlayer_API Plugin_MediaPlayer* getPlugin()
  {
    static Plugin_MediaPlayer plugin_instance;
    return &plugin_instance;
  }
}
