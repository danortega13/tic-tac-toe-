#include "TicTacToeBoard.hpp"

const std::int32_t ROW_SIZE = 3;
const std::int32_t COL_SIZE = 3;
const std::int32_t BOARD_SIZE = ROW_SIZE * COL_SIZE;

TicTacToeBoard::TicTacToeBoard() :
  m_board(BOARD_SIZE, 0)
{
}
