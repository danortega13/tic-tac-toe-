#include "TicTacToeBoard.hpp"

int main(int argc, char *argv[]) {
  TicTacToeBoard game_board;

  game_board.display_board();
  printf("%d\n",game_board.check_move(1,2));
  game_board.place_move(1,2);
  game_board.display_board();
} 
