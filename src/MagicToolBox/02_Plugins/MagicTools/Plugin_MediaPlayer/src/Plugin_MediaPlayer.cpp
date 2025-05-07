#include "stdafx.h"

#include "Plugin_MediaPlayer.h"

#include <MediaPlayer/MediaPlayer.h>

const char* Plugin_MediaPlayer::getName() const
{
  return "MediaPlayer";
}

const char* Plugin_MediaPlayer::getDescription() const
{
  return "MediaPlayer";
}

const char* Plugin_MediaPlayer::getType() const
{
  return "常规";
}

QIcon Plugin_MediaPlayer::getIcon() const
{
  return (QIcon(":/icons/icon.png"));
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
