#pragma once

#ifndef DATABASEVISUALIZATIONTOOL_H
# define DATABASEVISUALIZATIONTOOL_H

#include <QMainWindow>

namespace Ui
{
  class DatabaseVisualizationTool;
}

class DatabaseVisualizationTool : public QMainWindow
{
  Q_OBJECT
public:
  explicit DatabaseVisualizationTool(QWidget* parent = nullptr,Qt::WindowFlags flags = Qt::WindowFlags());
  ~DatabaseVisualizationTool() override;
private:
  Ui::DatabaseVisualizationTool* ui;
};

#endif//!DATABASEVISUALIZATIONTOOL_H
