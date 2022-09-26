#ifndef CLASSES_LAPTOP_H
#define CLASSES_LAPTOP_H

#include <QDebug>
#include <QObject>

class Laptop : public QObject {
  Q_OBJECT

public:
  // Constructor
  explicit Laptop(QObject *parent = nullptr, QString name = "");

  // Deconstructor
  ~Laptop();

  // Variables
  int weight;
  QString name;

  // Functions
  double asKilo() const;
  void test();

  signals:
};

#endif