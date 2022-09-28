//
// Created by Mac on 2022/09/28.
//

#ifndef CLASSES_MAMMAL_H
#define CLASSES_MAMMAL_H

#include <QObject>
#include <QDebug>
#include "animal.h"

class Mammal : public Animal {
  Q_OBJECT

public:
  explicit Mammal(QObject *parent = nullptr);

  bool hasBackBone() {
    return true;
  }

signals:
};


#endif//CLASSES_MAMMAL_H
