#include "laptop.h"

Laptop::Laptop(QObject * parent, QString name) : QObject(parent) {
  this->name = name;
  qInfo() << this << "Constructor" << name;
}

Laptop::~Laptop() {
  qInfo() << this << "Deconstructor" << name;
}

double Laptop::asKilo() const {
  return weight * 0.453592;
}

void Laptop::test() {
  qInfo() << this << "Test: " << name << " KILO: " << asKilo();
}