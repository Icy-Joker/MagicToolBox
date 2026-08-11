#pragma once

#ifndef STACKEDBARCHART_H
# define STACKEDBARCHART_H

#include <QChartView>

class StackedBarChart : public QChartView
{
  Q_OBJECT
public:
  explicit StackedBarChart(QWidget* parent = nullptr);
  ~StackedBarChart() override;
private:
};

#endif//!STACKEDBARCHART_H
