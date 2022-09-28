//
// Created by Mac on 2022/09/28.
//

#include "Mammal.h"

Mammal::Mammal(QObject *parent) : Animal(parent) {
  qInfo() << this << " constructed";
}
