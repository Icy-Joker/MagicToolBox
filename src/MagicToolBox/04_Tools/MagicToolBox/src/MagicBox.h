#pragma once

#ifndef MAGICBOX_H
# define MAGICBOX_H

#include <QWidget>

#include <string>

class MagicTool;

class MagicBox : public QWidget
{
  Q_OBJECT
public:
  explicit MagicBox(QWidget* parent = nullptr);
  ~MagicBox();
public:
  void setName(const QString& name);
  const QString& getName() const;
public:
  void registerMagicTool(MagicTool* magic_tool);
  //void unregisterMagicTool(MagicTool* magic_tool);
private
  slots:
  void slot_action_CreateMagicTool_triggered();
private:
  QString name;
};

#endif//!MAGICBOX_H
