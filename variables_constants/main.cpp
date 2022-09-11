#include <QCoreApplication>
#include <QDebug>

#include "./array.cpp"
#include "./arithmetic.cpp"
#include "./assignment_operators.cpp"

int main(int argc, char *argv[]) {
  QCoreApplication a(argc, argv);

  assignment_op();

  return QCoreApplication::exec();
}
