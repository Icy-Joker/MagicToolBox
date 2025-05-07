#pragma once

#ifndef JSONVISUALEDITOR_H
# define JSONVISUALEDITOR_H

#include <QMainWindow>

namespace Ui
{
  class JsonVisualEditor;
}

class JsonVisualEditor : public QMainWindow
{
  Q_OBJECT
public:
  JsonVisualEditor(QWidget* parent = nullptr,Qt::WindowFlags flags = Qt::WindowFlags());
  ~JsonVisualEditor();
public:
  void doParseJson();
private
  slots:
  void on_treeView_clicked(const QModelIndex& index);
protected:
  void keyPressEvent(QKeyEvent* event) override;
private:
  Ui::JsonVisualEditor* ui;
};

#endif//!JSONVISUALEDITOR_H
