///
/// A C++ Chess Library
/// 
/// Copyright (c) Ari Makela 2012
///
/// See file COPYRIGHT.
///

#ifndef _TESTQUEEN_HPP
#define _TESTQUEEN_HPP

#include "../lib/constants.hpp"
#include "../lib/queen.hpp"

#include <QtTest/QtTest>

class TestQueen : public QObject {
  Q_OBJECT
  private slots:
  void qchr();
};

#endif
