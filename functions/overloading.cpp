void test() {
  qInfo() << "this is a test";
}

void test(const QString name) {
  qInfo() << "Name" << name;
}

void test(int age) {
  qInfo() << "Age" << age;
}

void test(bool isActive) {
  if(isActive) {
    qInfo() << "true";
  } else {
    qInfo() << "false";
  }
}