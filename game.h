#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define Row 3
#define Col 3

#define Rows Row+2
#define Cols Col+2

#define number 1

//∆Â≈Ã≥ı ºªØ
void initialize_board(char board[Rows][Cols], int rows, int cols, char set);

//∆Â≈Ã¥Ú”°
void print_board(char board[Rows][Cols], int row, int col);

//≤º÷√¿◊
void layout_tunter(char hide[Rows][Cols], int row, int col,int num);

//≈≈¿◊
int mine(char hide[Rows][Cols],char show[Rows][Cols], int rows, int cols,int num);