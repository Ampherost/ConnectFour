#ifndef BOARD_H
#define BOARD_H

#include <vector>
#include <iostream>

class Board {
public:
    Board();

    void displayBoard() const;

    bool placePiece(int column, char piece); // Move to player

    bool checkWin(char piece) const; // Move to utility

    bool isFull() const; // Move to utility

private:
    std::vector<std::vector<char>> grid;

    bool checkHorizontalWin(char piece) const; // Move to utility
    bool checkVerticalWin(char piece) const; // Move to utility
    bool checkDiagonalWin(char piece) const; // Move to utility

    static const int ROWS = 6;
    static const int COLUMNS = 7;
};

#endif 