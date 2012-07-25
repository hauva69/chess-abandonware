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
  QVERIFY(k.qchr() == 'K');
  Acl::King* pk = new Acl::King(Acl::BLACK);
  QVERIFY(pk->qchr() == 'k');
  delete pk;
  pk = NULL;
  //k = Acl::King(Acl::BLACK);
  //QVERIFY(k.qchr() == 'k');
} 

QTEST_MAIN(TestKing)
