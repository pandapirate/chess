//============================================================================
// Name        : Chess.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

#include "piece/King.h"
#include "board/Board.h"

using namespace std;

int main() {

	Board *b = new Board();
	b->printBoard();

	return 0;
}
