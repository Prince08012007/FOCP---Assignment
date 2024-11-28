#include <stdio.h>
#include <math.h>
#include <conio.h>  
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

void printTicTacToe(char ticTacToe[3][3]) {
  printf("Now the tic tac toe board is: \n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%c ", ticTacToe[i][j]);
    }
    printf("\n");
  }
}

void computerTurn(char ticTacToe[3][3]) {
  while (1) {
    srand(time(0));
    int row = rand() % 3;
    int col = rand() % 3;
    if (ticTacToe[row][col] == '.') {
      ticTacToe[row][col] = 'O';
      printf("The computer moved on %d and %d position\n", row+1, col+1);
      printTicTacToe(ticTacToe);
      break;
    }
  }
}

void playerTurn(char ticTacToe[3][3]) {
  int row;
  int col;

  printf("Now its your turn, Enter the row and col: ");
  scanf("%d %d", &row, &col);
  row--;
  col--;

  if (ticTacToe[row][col] != '.') {
    printf("Incorrect input! your turn is skipped ;)\n");
    return;
  }

  ticTacToe[row][col] = 'X';
  printTicTacToe(ticTacToe);
}

bool winCondition(char ticTacToe[3][3]) {
  // rows
  for (int i = 0; i < 3; i++) {
      if (ticTacToe[i][0] != '.' && ticTacToe[i][1] != '.' &&
          ticTacToe[i][2] != '.' && ticTacToe[i][0] == ticTacToe[i][1] &&
          ticTacToe[i][1] == ticTacToe[i][2]) {
        return true;
      }
  }

  // col
  for (int j = 0; j < 3; j++) {
    if (ticTacToe[0][j] != '.' && ticTacToe[1][j] != '.' &&
        ticTacToe[2][j] != '.' && ticTacToe[0][j] == ticTacToe[1][j] &&
        ticTacToe[1][j] == ticTacToe[2][j]) {
      return true;
    }
  }

  // diagonal
  if (ticTacToe[0][0] != '.' && ticTacToe[1][1] != '.' &&
      ticTacToe[2][2] != '.' && ticTacToe[0][0] == ticTacToe[1][1] &&
      ticTacToe[1][1] == ticTacToe[2][2]) {
    return true;
  }

  // reverse diagonal
  if (ticTacToe[0][2] != '.' && ticTacToe[1][1] != '.' &&
      ticTacToe[2][0] != '.' && ticTacToe[0][2] == ticTacToe[1][1] &&
      ticTacToe[1][1] == ticTacToe[2][0]) {
    return true;
  }

  return false;
}

int main() {
  char ticTacToe[3][3];

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      ticTacToe[i][j] = '.';
    }
  }

  int totalEmptySlots = 9;

  while (totalEmptySlots > 0) {
    computerTurn(ticTacToe);
    totalEmptySlots--;

    if (winCondition(ticTacToe)) {
      printf("Computer Won!\n");
      break;
    }

    if (totalEmptySlots == 0) {
      printf("Game ended as a draw!\n");
      break;
    }

    playerTurn(ticTacToe);
    totalEmptySlots--;
    
    if (winCondition(ticTacToe)) {
      printf("You Won!\n");
      break;
    }

    if (totalEmptySlots == 0) {
      printf("Game ended as a draw!\n");
      break;
    }
  }
return 0;
}