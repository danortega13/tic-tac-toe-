#include <cstdio>
#include <string>
#include <iostream>
int NUM_ROWS = 3;
int NUM_COLS = 3;

//displays the tic tac toe board
void display_Board(std::string b [] [3]){
  
  std::string display_board;
  for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++){
       
      display_board += b[i][j] + " " ;
     
    }
    display_board +=  "\n";
  } 
  printf("%s\n", display_board.c_str());
  
 

}

// switches the turn of the user
char switch_turns(char t){
  if(t == 'O')
    return 'X';
  else
    return 'O';
  
}
bool is_empty(int r, int c,std::string b[] [3] ){
  printf("Inside is empty");
  if (b[r][c] == "-")
    return true;
  else
    return false;

}
bool valid_move(int r , int c){
  printf("inside valid move\n");
  if (r >= 0 && r < 3 && c >= 0 && c < 3 )
    return true;
  else
    return false;
}



int main(int argc, char *argv[]) {
  int u_row, u_col;
  char  turn = 'O';
  std::string  board [3][3]= { {"-","-","-"} , {"-","-","-"},{"-","-","-"}};
  while (true){
      display_Board(board);
      printf("Please enter a row: \n");
      std::cin >> u_row;
      printf("Please enter a column: \n");
      std::cin >> u_col;
      u_row = u_row - 1;
      u_col = u_col - 1;
      if (valid_move(u_row,u_col) && is_empty(u_row,u_col,board)){
	  printf("good to go\n");
	  board[u_row][u_col] = turn;
	  turn = switch_turns(turn);
      }
      else
	printf("No go\n");
 }
  display_Board(board);
  board[0][0] = turn;
  display_Board(board);
  turn = switch_turns(turn);
  board[0][1] = turn;
  display_Board(board);
  turn = switch_turns(turn);
  board[0][2] = turn;
  display_Board(board);
  return 0;  
}
