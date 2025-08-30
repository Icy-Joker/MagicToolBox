#pragma once

#ifndef REGULAREXPRESSIONVALIDATOR_H
# define REGULAREXPRESSIONVALIDATOR_H

#include <QMainWindow>

namespace Ui
{
  class RegularExpressionValidator;
}

class RegularExpressionValidator : public QMainWindow
{
  Q_OBJECT
public:
  explicit RegularExpressionValidator(QWidget* parent = nullptr,Qt::WindowFlags flags = Qt::WindowFlags());
  ~RegularExpressionValidator();
public:
protected:
private
  slots:
  void on_lineEdit_RegularExpression_editingFinished();
  void on_comboBox_MatchRules_activated(int index);
  void on_pushButton_Validate_clicked();
private:
  Ui::RegularExpressionValidator* ui;
};

#endif//!REGULAREXPRESSIONVALIDATOR_H
