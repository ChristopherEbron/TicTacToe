#include <iostream>


//Display board (board)
  void displayBoard(char Board[3][3], int rows){
    std::cout << "===========\n";
    for (int i = 0; i < rows; ++i){
      for (int j = 0; j < rows; ++j){
        std::cout << Board[i][j] << " | ";
      }
      std::cout << std::endl;
      std::cout << "===========\n";
    }
  }

int main() {
  const int COLUMNS = 3;
  const int ROWS = 3;
  // Create board
  char board[COLUMNS][ROWS] = {{' ',' ',' '}, {' ',' ',' '}, {' ',' ',' '}};

  


  displayBoard(board,ROWS);

  return 0;
}