#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define EASY_COUNT 10

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

//初始化棋盘
void InitBoard(char board[ROWS][COLS], int rows, int cols,char set);

//打印棋盘
void DisplayBoard(char board[ROWS][COLS], int row, int col);

//布置雷
void SetMine(char mine[ROWS][COLS], int row, int col, int count);

//排查雷
void FineMine(char mine[ROWS][COLS],char show[ROWS][COLS], int row, int col);

//统计mine数组的x,y坐标周围的雷的个数
int GetMineCont(char mine[ROWS][COLS], int x, int y);