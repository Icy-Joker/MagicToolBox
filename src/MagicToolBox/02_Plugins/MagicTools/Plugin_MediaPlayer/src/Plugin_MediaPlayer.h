#pragma once

#ifndef PLUGIN_MEDIAPLAYER_H
# define PLUGIN_MEDIAPLAYER_H

#include <MagicToolBox/MagicTool.h>

#include <QWidget>

class Plugin_MediaPlayer : public MagicTool
{
public:
  explicit Plugin_MediaPlayer();
  ~Plugin_MediaPlayer() override;
public:
  QWidget* createInstance(QWidget* parent = nullptr,Qt::WindowFlags flags = Qt::WindowFlags()) const override;
};

#endif//!PLUGIN_MEDIAPLAYER_H
