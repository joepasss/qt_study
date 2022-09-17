// By ref By value

// how send data to functions
// value is copy, ref is the actual object

// passing by value - Copy - QObject do not like being copied!
void testVal(int x) {
  x = x * 10;
  qInfo() << "TestVal X : " << x;
}

// pass by reference
void testRef(int &x) {
  x = x * 10;
  qInfo() << "TestRef X : " << x;
}

void byRefByValue () {
  int x = 5;
  qInfo() << "main X : " << x;
  testVal(x);
  qInfo() << "main X : " << x;
  testRef(x);
  qInfo() << "main X : " << x;
}