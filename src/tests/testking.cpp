///
/// A C++ Chess Library
/// 
/// Copyright (c) Ari Makela 2012
///
/// See file COPYRIGHT.
///

#include "testking.hpp"

void TestKing::qchr() {
  Acl::King k = Acl::King(Acl::WHITE);
  QVERIFY(k.qchr() == 'k');
} 

QTEST_MAIN(TestKing)
