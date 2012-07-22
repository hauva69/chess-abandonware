#include "constants.hpp"
#include "piece.hpp"
#include "king.hpp"

namespace Acl {
  QChar King::qchr() const {
    QChar c = QChar(symbols_[KING]);

    if (color_ == BLACK) {
      return c.toLower();
    }

    return c;
  }
}

