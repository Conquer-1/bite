#define _CRT_SECURE_NO_WARNINGS
#define ROW 3
#define COL 3

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//��ʼ������
void InitBoard(char board[ROW][COL], int row, int col);

//��ӡ����
void DisplayBoard(char board[ROW][COL], int row, int col);

//�������
void PlayerMove(char board[ROW][COL], int row, int col);

//��������
void ComputerMove(char board[ROW][COL], int row,int col);

char CheckWin(char board[ROW][COL],int row,int col);

int IsFull(char board[ROW][COL], int row, int col);
