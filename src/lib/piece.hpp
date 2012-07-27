#ifndef _PIECE_HPP
#define _PIECE_HPP

#include "constants.hpp"

#include <QChar>
#include <QObject>
#include <QString>

namespace Acl {
  class Piece {
  protected:
    int color_;
    QString symbols_;

  public:

    ///
    /// @param WHITE or BLACK	
    ///

    Piece(int color);
    Piece(const Piece& pc);

    virtual ~Piece() {}

    Piece& operator=(const Piece& pc);

    ///
    /// @return The piece as a character symbol.
    ///

    virtual QChar qchr() const = 0;

    ///
    /// @return The piece as a QString.
    ///

    virtual QString toString() const = 0;

    ///
    /// @return true if the piece is a pawn.
    ///

    virtual bool isPawn() const { 
      return false; 
    }

    ///
    /// @return true if the piece is a knight.
    ///

    virtual bool isKnight() const { 
      return false; 
    }

    ///
    /// @return true if the piece is a bishop.
    ///

    virtual bool isBishop() const { 
      return false; 
    }

    ///
    /// @return true if the piece is a rook.
    ///

    virtual bool isRook() const { 
      return false; 
    }

    ///
    /// @return true if the piece is a queen.
    ///

    virtual bool isQueen() const { 
      return false; 
    }

    /// 
    /// @return true if the piece is a king.
    ///

    virtual bool isKing() const { 
      return false; 
    }
			
    ///
    /// @return true if the piece is white.
    ///

    inline bool isWhite() const {
      if (color_ == WHITE)
	return true;
      else
	return false;
    }
			
    ///
    /// @return true if the piece is black.
    ///

    inline bool isBlack() const {
      if (color_ == BLACK)
	return true;
      else
	return false;
    }


    ///
    /// @return WHITE or BLACK.
    ///

    inline int getColor() const {
      return color_;
    }
  };
}

#endif

