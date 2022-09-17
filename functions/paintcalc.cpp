void paintcalc(double height, double width) {
  if(height == 0 || width == 0) {
    qFatal("BYE");
  }

  qInfo() << height * width << "\n";
}