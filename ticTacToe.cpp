#include <iostream>


//Display board function
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
  // Check for winner function
  bool checkForWinner(char Board[3][3], char player) {
    for(int i = 0; i < 3; i++){
      if (Board[0][i] == player && Board[1][i] == player && Board[2][i] == player){
        return true;
      }
      if (Board[i][0] == player && Board[i][1] == player && Board[i][2] == player){
        return true;
      }
    }
    if (Board[0][0] == player && Board[1][1] == player && Board[2][2] == player){
      return true;
    }
    if (Board[0][2] == player && Board[2][2] == player && Board[2][0] == player){
      return true;
    }
    return false;

  }

int main() {
  const int COLUMNS = 3;
  const int ROWS = 3;
  char player = 'X';
  int inputColumn;
  int inputRow;

  // Create board
  char board[COLUMNS][ROWS] = {{' ',' ',' '}, {' ',' ',' '}, {' ',' ',' '}};
  bool isRunning = true;

  

    
    
  


  


  displayBoard(board,ROWS);
  

  
  return 0;
}