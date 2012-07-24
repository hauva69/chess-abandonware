///
/// A C++ Chess Library
/// 
/// Copyright (c) Ari Makela 2012
///
/// See file COPYRIGHT.
///

#ifndef _TESTKING_HPP
#define _TESTKING_HPP

#include "../lib/constants.hpp"
#include "../lib/king.hpp"
#include <QtTest/QtTest>

class TestKing : public QObject {
  Q_OBJECT
  private slots:
  void qchr();
};

#endif
