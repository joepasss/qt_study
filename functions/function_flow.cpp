int calc(int offset, int age) {
  if (offset == 0) {
    qFatal("Offset can not be zero!");
  }

  if (age <= 0 || age > 120) {
    qFatal("Invalid Age");
  }

  return offset * age;
}