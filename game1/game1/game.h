自定义头文件

#ifndef __GAME_H__
#define __GAME_H__

#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<time.h>
#include<stdlib.h>

#define Row 3
#define Col 3

void InitBoard(char board[Row][Col],int row,int col);
void DisplayBoard(char board[Row][Col], int row, int col);
void PlayMove(char board[Row][Col], int row, int col);
void ComputerMove(char board[Row][Col], int row, int col);
char IsWin(char board[Row][Col], int row,int col);
int IsFull(char board[Row][Col], int row, int col);

#endif //__GAME_H__
