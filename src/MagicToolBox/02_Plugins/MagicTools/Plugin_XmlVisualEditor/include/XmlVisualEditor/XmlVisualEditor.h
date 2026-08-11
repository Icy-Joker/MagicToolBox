#pragma once

#ifndef VISUALXMLEDITOR_H
# define VISUALXMLEDITOR_H

#include <QMainWindow>

namespace Ui
{
  class XmlVisualEditor;
}

struct XmlVisualEditorPrivate;

class XmlVisualEditor : public QMainWindow
{
  Q_OBJECT
public:
  XmlVisualEditor(QWidget* parent = nullptr,Qt::WindowFlags flags = Qt::WindowFlags());
  ~XmlVisualEditor();
public:
  void doParseXml();
private
  slots:
  void on_treeView_clicked(const QModelIndex& index_current_selected);
protected:
  void keyPressEvent(QKeyEvent* event) override;
private:
  Ui::XmlVisualEditor* ui;
  XmlVisualEditorPrivate* _p;
};

#endif//!VISUALXMLEDITOR_H
