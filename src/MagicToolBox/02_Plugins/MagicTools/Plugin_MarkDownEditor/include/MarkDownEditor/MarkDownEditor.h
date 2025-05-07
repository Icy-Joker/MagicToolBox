#pragma once

#ifndef MARKDOWNEDITOR_H
# define MARKDOWNEDITOR_H

#include <QMainWindow>

namespace Ui
{
  class MarkDownEditor;
}

class MarkDownEditor : public QMainWindow
{
public:
  Q_OBJECT
public:
  explicit MarkDownEditor(QWidget* parent = nullptr,Qt::WindowFlags flags = Qt::WindowFlags());
  ~MarkDownEditor();
private
  slots:
  void on_tab_SourceView_textChanged();
private:
  Ui::MarkDownEditor* ui;
};

#endif//!MARKDOWNEDITOR_H
