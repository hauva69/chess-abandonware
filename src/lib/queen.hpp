#ifndef _QUEEN_HPP
#define _QUEEN_HPP

#include "constants.hpp"
#include "piece.hpp"

namespace Acl {
  class Queen : public Piece {
  public:
    Queen(int color) : Piece(color) {}
		
    virtual QChar qchr() const;

    virtual QString toString() const;

    virtual bool isQueen() const {
      return true;
    }
  };
}

#endif

