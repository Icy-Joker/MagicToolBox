#pragma once

#ifndef SPLINECHART_H
# define SPLINECHART_H

#include <QChartView>

class SplineChart : public QChartView
{
  Q_OBJECT
public:
  explicit SplineChart(QWidget* parent = nullptr);
  ~SplineChart() override;
private:
};

#endif//!SPLINECHART_H
