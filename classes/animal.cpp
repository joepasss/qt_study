//
// Created by Mac on 2022/09/24.
//

#include "animal.h"

Animal::Animal(QObject *parent) : QObject(parent) {
  qInfo() << this << " constructed";
}