//
// Created by Mac on 2022/09/24.
//

#ifndef CLASSES_ANIMAL_H
#define CLASSES_ANIMAL_H

#include <QDebug>
#include <QObject>


class Animal : public QObject {
  Q_OBJECT


public:
  explicit Animal(QObject *parent = nullptr);

  bool isAlive() {
    return true;
  };

private:
signals:
};


#endif//CLASSES_ANIMAL_H
