#pragma once

#ifndef PERCENTBARCHART_H
# define PERCENTBARCHART_H

#include <QChartView>

class PercentBarChart : public QChartView
{
  Q_OBJECT
public:
  explicit PercentBarChart(QWidget* parent = nullptr);
  ~PercentBarChart() override;
private:
};

#endif//!PERCENTBARCHART_H
