#include "constants.hpp"
#include "piece.hpp"

#include <cassert>
#include <iostream>

namespace Acl {
  Piece::Piece(int color) : color_(color), symbols_("KQRBNP") {
    assert((color == WHITE) || (color == BLACK));
  }
}

