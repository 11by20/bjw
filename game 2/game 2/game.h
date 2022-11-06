#define _CRT_SECURE_NO_DEPRECATE 1
#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

# define  ROW 9
# define  COL 9
# define  ROWS COL+2
# define  COLS COL+2
# define EXSY_COUNT 10


void Initboard(char board[ROWS][COLS], int rows, int cols);
void Displayboard(char board[ROWS][COLS], int row, int col);
void Sitmine(char board[ROWS][COLS],int row,int col);
void Findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
