// Functions in Structs

// use class instead

struct laptop {
  int weight;

  double askKilograms() {
    return weight * 0.453592;
  }
};

void functionsInStructs() {
  laptop notebook;

  notebook.weight = 5;

  qInfo() << "Pounds" << notebook.weight;
  qInfo() << "Kilograms" << notebook.askKilograms();
};