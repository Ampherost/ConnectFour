#include "player.h"
#include <iostream>

void playerMove(Board& board, char player) {

}

void switchPlayer(char& player) {
if (player == 'X') {
    player = 'O';
}

else {
    player = 'X';
}
}