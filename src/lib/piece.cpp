#include "constants.hpp"
#include "piece.hpp"

#include <cassert>

namespace Acl {
  Piece::Piece(int color) : color_(color), symbols_("KQRBNP") {
    assert((color == WHITE) || (color == BLACK));
  }

  Piece::Piece(const Piece& pc) : color_(pc.color_), symbols_(pc.symbols_) {}

  Piece& Piece::operator=(const Piece& pc) {
    if (this != &pc) {
      color_ = pc.color_;
      symbols_ = pc.symbols_;
    }
    
    return *this;
  }
}

