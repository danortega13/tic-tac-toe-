#include <vector>

class TicTacToeBoard {

public:
  TicTacToeBoard();
  void display_board(void);
  std::vector<char> get_board(void);

private:
  std::vector<char> m_board;
};


