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

  // TODO: print the symbol and the unicode char.
  QString King::toString() const {
    if (color_ == BLACK) {
      return "Black King";
    }

    return "White King";
  }
}

