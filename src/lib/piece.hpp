#ifndef _PIECE_HPP
#define _PIECE_HPP

#include "constants.hpp"

#include <string>

namespace Acl {
  class Piece {
  protected:
    const int color_;
    char *symbols_;

  public:

    ///
    /// @param WHITE or BLACK	
    ///

    Piece(int color);
    virtual ~Piece() {}

    ///
    /// @return The piece as a character symbol.
    ///

    virtual char chr() const = 0;

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

