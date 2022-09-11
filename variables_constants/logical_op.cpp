// Comparison & logical operators
// compares different variables
// x == y, x < y, x <= y, x != y, etc ...
// logical operation
// &&, ||, !
// logical and &&
// logical or ||
// logical not !

void logical() {
  int a = 10;
  int b = 12;

  qInfo() << "" << (a == b);            // false
  qInfo() << "" << (a < b);             // true
  qInfo() << "" << (a == b && a != b);  // false
  qInfo() << "" << (a == b || a != b);  // true
  qInfo() << "" << (a != b);            // true
}