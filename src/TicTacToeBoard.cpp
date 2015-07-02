#include "TicTacToeBoard.hpp"

const std::int32_t ROW_SIZE = 3;
const std::int32_t COL_SIZE = 3;
const std::int32_t BOARD_SIZE = ROW_SIZE * COL_SIZE;
const char SYMBOL_TABLE[] = { '-', 'X', 'Y' };
const uint8_t PIECE_BLANK = 0;
const uint8_t PIECE_X = 1;
const uint8_t PIECE_Y = 2;

TicTacToeBoard::TicTacToeBoard() :
  m_board(BOARD_SIZE, PIECE_BLANK)
{
  // declaring these void for now to please compiler
  // remove when actually using them.
  (void)PIECE_X;
  (void)PIECE_Y;
}

void TicTacToeBoard::display_board(void){
  for(int i = 0; i < ROW_SIZE; i++){
    for(int j = 0; j < COL_SIZE; j++){
      printf("%c ", SYMBOL_TABLE[m_board[i]]);
    }
    printf("\n");
  }
} 
