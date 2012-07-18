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
    /**
       @param WHITE or BLACK	
    */
    Piece(int color);
    virtual ~Piece() {}

    /**
       @return The piece as a character symbol.
    */
    virtual const char chr() const = 0;

    /**
       @return true if the piece is a pawn.
    */
    virtual const bool isPawn() const { 
      return false; 
    }

    /**
       @return true if the piece is a knight.
    */
    virtual const bool isKnight() const { 
      return false; 
    }

    /**
       @return true if the piece is a bishop.
    */
    virtual const bool isBishop() const { 
      return false; 
    }

    /**
       @return true if the piece is a rook.
    */
    virtual const bool isRook() const { 
      return false; 
    }

    /**
       @return true if the piece is a queen.
    */
    virtual const bool isQueen() const { 
      return false; 
    }

    /**
       @return true if the piece is a king.
    */
    virtual const bool isKing() const { 
      return false; 
    }
			
    /**
       @return true if the piece is white.
    */
    inline const bool isWhite() const {
      if (color_ == WHITE)
	return true;
      else
	return false;
    }
			
    /**
       @return true if the piece is black.
    */
    inline const bool isBlack() const {
      if (color_ == BLACK)
	return true;
      else
	return false;
    }


    /**

       @return WHITE or BLACK.
			
    */

    inline const int getColor() const {
      return color_;
    }
  };
}

#endif

