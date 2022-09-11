#include <QCoreApplication>
#include <QDebug>

#include "./array.cpp"

/*
 * dataTypes
 * = type of data
 * basic data type
 * = int, float, double, boolean, char
 * int = 4 bytes
 * float = 4 bytes
 * double = 8 bytes
 * boolean = 1 byte
 * char = 1 byte, single character of ASCII values
 *
 * can make own dataTypes
 * class, structure, union, enum, typedef
 *
 * modifiers
 * signed, unsigned, long, short
 */

/*
 *  Constants
 * const int age = 32;
 */

/*
 *  Enums
 * need to represent a set of data
 * use the enum keyword
 */

/* Structs
 * Data structure
 *
 * user defined data type
 */

enum Colors {black, red, green, blue};

// Precursor to classes
struct product {
  int weight;
  double value;
  Colors color;
};

int main(int argc, char *argv[]) {
  QCoreApplication a(argc, argv);

  // Variables are something that will change
  // bool isOn = false;
  bool isOn{false};
  bool lightSwitch = false;

  lightSwitch = true;

  const int age = 88;// can't be change
  // age = 12; // it gets error

  //  int red = 0;
  //  int green = 1;
  //  int blue = 123;
  //
  //  qInfo() << "Color from variables :" << green;

//  enum Color {
//    red = 1,
//    green = 1,
//    blue = 256
//  };
//
//  Color myColor = Color::blue;

  product laptop{}; // no assignment!
  qInfo() << "size : " << sizeof(laptop);

  laptop.color = Colors::green;
  laptop.value = 540;
  laptop.weight = 800;

  qInfo() << laptop.color << laptop.value << laptop.weight;

  return QCoreApplication::exec();
}
