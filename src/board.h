#ifndef BOARD_H
#define BOARD_H

#include <vector>
#include <iostream>

class Board {
public:
    Board();

    void displayBoard() const;

    bool validMove(int column, char player) const;

    bool placePiece(int column, char piece); 


private:
    std::vector<std::vector<char>> grid;

    static const int ROWS = 6;
    static const int COLUMNS = 7;
};

#endif 