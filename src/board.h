#ifndef BOARD_H
#define BOARD_H

#include <vector>
#include <iostream>

class Board {
public:
    Board();

    void displayBoard() const;

    bool placePiece(int column, char piece);

    bool checkWin(char piece) const;

    bool isFull() const;

private:
    std::vector<std::vector<char>> grid;

    bool checkHorizontalWin(char piece) const;
    bool checkVerticalWin(char piece) const;
    bool checkDiagonalWin(char piece) const;

    static const int ROWS = 6;
    static const int COLUMNS = 7;
};

#endif 