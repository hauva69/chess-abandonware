#include "constants.hpp"
#include "piece.hpp"
#include "queen.hpp"

namespace Acl {
  QChar Queen::qchr() const {
    QChar c = QChar(symbols_[QUEEN]);

    if (color_ == BLACK) {
      return c.toLower();
    }

    return c;
  }

  // TODO: print the symbol and the unicode char.
  QString Queen::toString() const {
    if (color_ == BLACK) {
      return "Black Queen";
    }

    return "White Queen";
  }
}

