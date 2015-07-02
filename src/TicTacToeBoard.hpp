#include <vector>

class TicTacToeBoard {

public:
  TicTacToeBoard();
  void display_board(void);

private:
  std::vector<std::uint8_t> m_board;
};


