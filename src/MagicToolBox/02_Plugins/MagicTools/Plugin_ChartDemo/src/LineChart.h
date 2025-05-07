#pragma once

#ifndef LINECHART_H
# define LINECHART_H

#include <QChartView>

class LineChart : public QChartView
{
  Q_OBJECT
public:
  explicit LineChart(QWidget* parent = nullptr);
  ~LineChart() override;
private:
};

#endif//!LINECHART_H
