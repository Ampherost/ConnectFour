#ifndef UTILITY_H
#define UTILITY_H

#include "board.h"

bool checkWin(const Board& board, char player);

bool isFull(const Board& board, char player);

bool checkHorizontalWin(const Board& board, char player);

bool checkVerticalWin(const Board& board, char player);

bool checkDiagonalWin(const Board& board, char player);

#endif