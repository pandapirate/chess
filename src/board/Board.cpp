/*
 * Board.cpp
 *
 *  Created on: Aug 8, 2015
 *      Author: Kevin
 */

#include "Board.h"

#include <iostream>
#include <string>

using namespace std;

Board::Board() {
	for (int i = 0; i < 8; i++) {
		if (i == 0 || i == 7) {
			board[i][0] = new Rook(0, i);
			board[i][1] = new Knight(1, i);
			board[i][2] = new Bishop(2, i);
			board[i][3] = new King(3, i);
			board[i][4] = new Queen(4, i);
			board[i][5] = new Bishop(5, i);
			board[i][6] = new Knight(6, i);
			board[i][7] = new Rook(7, i);
		} else {
			for (int j = 0; j < 8; j++) {
				if (i == 1 || i == 6) {
					board[i][j] = new Pawn(j, i);
				} else {
					board[i][j] = new Piece("-");
				}
			}
		}
	}
}

void Board::printBoard() {
	string letters[] = {" ", "A", "B", "C", "D", "E", "F", "G", "H"};
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (i == 0) {
				cout << letters[j] << " ";
			} else {
				if (j == 0) {
					cout << std::to_string(i) << " ";
				} else {
					cout << board[i-1][j-1]->getPieceValue() << " " ;
				}
			}

		}
		printf("\n");
	}
}
