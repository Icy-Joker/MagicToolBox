#pragma once

#ifndef GRAPHICSGENERATOR_H
# define GRAPHICSGENERATOR_H

#include <QGraphicsItem>

class GraphicsGenerator : public QObject
{
  Q_OBJECT
private:
  GraphicsGenerator();
  ~GraphicsGenerator();
public:
  static GraphicsGenerator* getInstance();
public:
  QGraphicsItem* createRectangle();
  QGraphicsItem* createCircle();
  QGraphicsItem* createTriangle();
  QGraphicsItem* createText();
};

#endif//!GRAPHICSGENERATOR_H
