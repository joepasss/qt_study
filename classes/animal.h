//
// Created by Mac on 2022/09/24.
//

#ifndef CLASSES_ANIMAL_H
#define CLASSES_ANIMAL_H

#include <QDebug>
#include <QObject>


class Animal : public QObject {
  Q_OBJECT

  // private area

public:
  explicit Animal(QObject *parent = nullptr);
  void speak(QString const message);

private:
signals:
};


#endif//CLASSES_ANIMAL_H
