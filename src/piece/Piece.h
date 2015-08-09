/*
 * Piece.h
 *
 *  Created on: Aug 8, 2015
 *      Author: Kevin
 */

#ifndef PIECE_PIECE_H_
#define PIECE_PIECE_H_

#include <iostream>
#include <string>

using namespace std;

class Piece {
public:
	Piece(string val);
	Piece(int x, int y);

	string getPieceValue();
	void move(int x, int y);
	bool canMove(int x, int y);

protected:
	string value;
	bool blackColor;

	int x;
	int y;
};


#endif /* PIECE_PIECE_H_ */
