///
/// A C++ Chess Library
/// 
/// Copyright (c) Ari Makela 2012
///
/// See file COPYRIGHT.
///

#include <QCoreApplication>
#include <QTextStream>

#include <cstdlib>

int main(int argc, char **argv) {
  QCoreApplication app(argc, argv);
  QTextStream cout(stdout);

  cout << "hello, world" << endl;

  return EXIT_SUCCESS;
}


