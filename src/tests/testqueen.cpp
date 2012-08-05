///
/// A C++ Chess Library
/// 
/// Copyright (c) Ari Makela 2012
///
/// See file COPYRIGHT.
///

#include "testqueen.hpp"

void TestQueen::qchr() {
  Acl::Queen q = Acl::Queen(Acl::WHITE);
  QVERIFY(q.qchr() == 'Q');
  Acl::Queen* pq = new Acl::Queen(Acl::BLACK);
  QVERIFY(pq->qchr() == 'q');
  delete pq;
  pq = NULL;
  q = Acl::Queen(Acl::BLACK);
  QVERIFY(q.qchr() == 'q');
} 

//QTEST_MAIN(TestQueen)
