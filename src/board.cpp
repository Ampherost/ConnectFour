#include "board.h"

Board::Board() {
    grid = std::vector<std::vector<char>>(ROWS, std::vector<char>(COLUMNS, '.'));
}

void Board::displayBoard() const {
    for (int row = 0; row < ROWS; ++row) {
        for (int col = 0; col < COLUMNS; ++col) {
            std::cout << grid[row][col] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << "0 1 2 3 4 5 6" << std::endl;  
}

bool Board::placePiece(int column, char piece) {
    if (column < 0 || column >= COLUMNS || grid[0][column] != '.') {
        return false; 
    }

    for (int row = ROWS - 1; row >= 0; --row) {
        if (grid[row][column] == '.') {
            grid[row][column] = piece;
            return true;
        }
    }
    return false; 
}
