/*
QObject& get_object(QString name) {
  QObject o;  // on the stack, c++ manages for us!
  o.setObjectName(name);
  return o; // will be deleted
}
*/

QObject * get_object(QString const name) {
  auto * o = new QObject();  // On the heap, we will manage this!
  o->setObjectName(name);
  return o;
}

void returningValue() {
  QObject *o = get_object("By Pointer");

  qInfo() << o->objectName();

  delete o; // delete that off the heap;
}