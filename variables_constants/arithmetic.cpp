// Arithmetic Operator
// +, -, *, /, %, ++, -- ... etc

void arithmetic() {
  int age;// no assignment;
          //  qInfo() << age;

  age = 21;// assign
  qInfo() << age;

  // increment
  age ++;
  qInfo() << "increment: " << age;

  // decrement
  age --;
  qInfo() << "decrement: " << age;

  int order = age * 5;
  qInfo() << "assignment & multiply: " << order;
}