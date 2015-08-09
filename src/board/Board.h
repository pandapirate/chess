/*
 * Board.h
 *
 *  Created on: Aug 8, 2015
 *      Author: Kevin
 */

#ifndef BOARD_BOARD_H_
#define BOARD_BOARD_H_

#include "../piece/Piece.h"
#include "../piece/King.h"
#include "../piece/Queen.h"
#include "../piece/Rook.h"
#include "../piece/Knight.h"
#include "../piece/Bishop.h"
#include "../piece/Pawn.h"

class Board {
public:
	Board();

	void printBoard();

private:
	Piece *board[8][8];
};

#endif /* BOARD_BOARD_H_ */
