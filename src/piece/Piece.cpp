/*
 * Piece.cpp
 *
 *  Created on: Aug 8, 2015
 *      Author: Kevin
 */

#include "Piece.h"
#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

Piece::Piece(string val) {
	value = val;
	x = -1;
	y = -1;
	blackColor = true;
}

Piece::Piece(int x, int y) {
	this->x = x;
	this->y = y;

	if (y < 2) {
		this->blackColor = true;
	} else {
		this->blackColor = false;
	}
}

string Piece::getPieceValue() {
	if (this->blackColor) {
		return string(1, (char)toupper(value[0]));
	} else {
		return string(1, (char)tolower(value[0]));
	}
}

void Piece::move(int x, int y) {

}
