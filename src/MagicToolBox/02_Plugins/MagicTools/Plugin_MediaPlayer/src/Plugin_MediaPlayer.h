#pragma once

#ifndef PLUGIN_MEDIAPLAYER_H
# define PLUGIN_MEDIAPLAYER_H

#include <MagicToolBox/MagicTool.h>

#include <QWidget>

class Plugin_MediaPlayer : public MagicTool
{
public:
  Plugin_MediaPlayer() = default;
  ~Plugin_MediaPlayer() override = default;
public:
  const char* getName() const override;
  const char* getDescription() const override;
  const char* getType() const override;
  QIcon getIcon() const override;
public:
  QWidget* createInstance(QWidget* parent = nullptr,Qt::WindowFlags flags = Qt::WindowFlags()) const override;
};

#endif//!PLUGIN_MEDIAPLAYER_H
