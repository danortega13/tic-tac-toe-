#include "TicTacToeBoard.hpp"

const std::int32_t ROW_SIZE = 3;
const std::int32_t COL_SIZE = 3;
const std::int32_t BOARD_SIZE = ROW_SIZE * COL_SIZE;

TicTacToeBoard::TicTacToeBoard() :
  m_board(BOARD_SIZE, '-')
{
 

}

void TicTacToeBoard::display_board(void){
  for(int i = 0; i < ROW_SIZE; i++){
    for(int j = 0; j < COL_SIZE; j++){
       printf("%c ", this->m_board[i]);
    }
    printf("\n");
  }

} 

std::vector<char> TicTacToeBoard::get_board(void){
  return this->m_board;
}

int main(int argc, char *argv[]) {
  TicTacToeBoard game_board;
  std::vector<char> temp;
  game_board.display_board();
  


} 
