#ifndef _KING_HPP
#define _KING_HPP

#include "constants.hpp"

namespace Acl {
  class King : public Piece {
  public:
    King(int color) : Piece(color) {}
		
    virtual QChar qchr() const;

    virtual bool isKing() const {
      return true;
    }
  };
}

#endif

