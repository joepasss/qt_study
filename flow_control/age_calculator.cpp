void age_calc () {
  int age = 0;

  qInfo() << "Enter your age! :";
  cin >> age;

  if(age < 1 || age > 120) qFatal("Invalid values");

  int dog_years = age * 7;
  qInfo() << "age : " << age;
  qInfo() << "your age in dog years: " << dog_years;
}