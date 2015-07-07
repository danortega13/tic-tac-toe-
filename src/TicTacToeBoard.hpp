#include <vector>

class TicTacToeBoard {

public:
  TicTacToeBoard();
  void display_board(void);
  bool check_move(int r,int c);
  void place_move(int r,int c);
private:
  std::vector<std::uint8_t> m_board;
};


