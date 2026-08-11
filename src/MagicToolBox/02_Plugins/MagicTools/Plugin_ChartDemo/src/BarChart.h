#pragma once

#ifndef BARCHART_H
# define BARCHART_H

#include <QChartView>

class BarChart : public QChartView
{
  Q_OBJECT
public:
  explicit BarChart(QWidget* parent = nullptr);
  ~BarChart() override;
private:
};

#endif//!BARCHART_H
