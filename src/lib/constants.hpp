#ifndef _CONSTANTS_HPP
#define _CONSTANTS_HPP

#include <string>

/**

Chess constants for the library.

*/

namespace Acl {
	// The colors of the pieces
	enum Color { WHITE, BLACK };

	enum Pieces { KING, QUEEN, ROOK, BISHOP, KNIGHT, PAWN };

	enum Files { FILEA, FILEB, FILEC, FILED, FILEE, FILEF,
		FILEG, FILEH };

	enum Ranks { RANK1, RANK2, RANK3, RANK4, RANK5, RANK6,
		RANK7, RANK8 };

	const int FILES = 8;
	const int RANKS = 8;

	// The squares of the chess board.
	const int SQUARES = 64;
	const int A1 = 0;
	const int B1 = 1;
	const int C1 = 2;
	const int D1 = 3;
	const int E1 = 4;
	const int F1 = 5;
	const int G1 = 6;
	const int H1 = 7;
	const int A2 = 8;
	const int B2 = 9;
	const int C2 = 10;
	const int D2 = 11;
	const int E2 = 12;
	const int F2 = 13;
	const int G2 = 14;
	const int H2 = 15;
	const int A3 = 16;
	const int B3 = 17;
	const int C3 = 18;
	const int D3 = 19;
	const int E3 = 20;
	const int F3 = 21;
	const int G3 = 22;
	const int H3 = 23;
	const int A4 = 24;
	const int B4 = 25;
	const int C4 = 26;
	const int D4 = 27;
	const int E4 = 28;
	const int F4 = 29;
	const int G4 = 30;
	const int H4 = 31;
	const int A5 = 32;
	const int B5 = 33;
	const int C5 = 34;
	const int D5 = 35;
	const int E5 = 36;
	const int F5 = 37;
	const int G5 = 38;
	const int H5 = 39;
	const int A6 = 40;
	const int B6 = 41;
	const int C6 = 42;
	const int D6 = 43;
	const int E6 = 44;
	const int F6 = 45;
	const int G6 = 46;
	const int H6 = 47;
	const int A7 = 48;
	const int B7 = 49;
	const int C7 = 50;
	const int D7 = 51;
	const int E7 = 52;
	const int F7 = 53;
	const int G7 = 54;
	const int H7 = 55;
	const int A8 = 56;
	const int B8 = 57;
	const int C8 = 58;
	const int D8 = 59;
	const int E8 = 60;
	const int F8 = 61;
	const int G8 = 62;
	const int H8 = 63;
	// TODO check whether this is needed.
	const int ILLEGAL_SQUARE = 264;

	const std::string FEN_START = "rnbqkbnr/pppppppp/8/8/8/8/PPPPPPPP/RNBQKBNR w KQkq - 0 1";
}

#endif

