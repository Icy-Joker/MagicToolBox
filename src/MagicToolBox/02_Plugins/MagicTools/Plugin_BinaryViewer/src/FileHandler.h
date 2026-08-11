#pragma once

#ifndef FILEHANDLER_H
# define FILEHANDLER_H

#include <QThread>

class FileHandler : public QThread
{
  Q_OBJECT
public:
  explicit FileHandler(QObject* parent = nullptr);
  ~FileHandler();
public:
  void run() override;
};

#endif//!FILEHANDLER_H
