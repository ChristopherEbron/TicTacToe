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
  char board[COLUMNS][ROWS] = {{'X',' ',' '}, {' ','X',' '}, {'X',' ','X'}};
  bool isRunning = true;

  // std::cout << "Welcome to Tic Tac Toe!!\n";
  // std::cout << "Player 1 choose a square, by first selecting a column then a row:  \n";
  // std::cin >> inputColumn >> inputRow;
  

  // std::cout << "You chose " << inputColumn << " for a column and " << inputRow << " for a row\n";





  // while(isRunning) {

  //   if(isPlayerX) {
  //     std::cout << "Player X choose a square\n";
  //   } else {
  //     std::cout << "Player 0 choose a square \n";
  //   }

    
    
  // }


  


  displayBoard(board,ROWS);
  std::cout << checkForWinner(board,player) << std::endl;

  // if(checkForWinner(board,player)) {
  //   std::cout << "player one you are the winner!";
  // }else{
  //   std::cout << "You did not win!";
  // };

  return 0;
}