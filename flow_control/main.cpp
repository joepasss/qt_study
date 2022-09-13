#include <QCoreApplication>
#include <QDebug>

#include "if_statement.cpp"
#include "ternary.cpp"
#include "switch_state.cpp"
#include "loops.cpp"

int main(int argc, char *argv[]) {
  QCoreApplication a(argc, argv);

  loops();

  return QCoreApplication::exec();
}
