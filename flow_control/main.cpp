#include <QCoreApplication>
#include <QDebug>

#include "if_statement.cpp"
#include "ternary.cpp"
#include "switch_state.cpp"

int main(int argc, char *argv[]) {
  QCoreApplication a(argc, argv);

  ternary();

  return QCoreApplication::exec();
}
