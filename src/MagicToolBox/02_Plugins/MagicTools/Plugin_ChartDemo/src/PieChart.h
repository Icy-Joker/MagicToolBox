#pragma once

#ifndef PIECHART_H
# define PIECHART_H

#include <QChartView>

class PieChart : public QChartView
{
  Q_OBJECT
public:
  explicit PieChart(QWidget* parent = nullptr);
  ~PieChart() override;
private:
};

#endif//!PIECHART_H
