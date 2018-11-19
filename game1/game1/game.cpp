游戏中的函数定义：
1.初始化棋盘
2.打印棋盘
3.玩家走
4.电脑走
5.判断输赢（此代码以三子棋盘，三子棋为例）
  拓展函数方法：拓展棋盘：可改变自定义头文件中，Row,Col的值；
               拓展玩棋子数：a.可在函数输入时由用户输入一个数nun，例如输入3玩三子棋，5玩五子棋；
	                    b.接下来将num值传进IsWin函数中，将k的上限改为num-1;if语句内的判断条件也改为k==num-1;

#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"
//初始化棋盘
void InitBoard(char board[Row][Col], int row, int col)
{
	memset(&board[0][0], ' ', row*col*sizeof(board[0][0]));
}
//打印棋盘
void DisplayBoard(char board[Row][Col], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col-1)
			{
             printf("|");
			}
		}
		printf("\n");
		if (i < row-1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j<col-1)
				printf("|");
			}
			printf("\n");
		}
	}
}
//玩家走
void PlayMove(char board[Row][Col], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("玩家走，请输入位置:> ");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("该位置被占用\n");
			}
		}
		else
		{
			printf("位置坐标输入错误，请重新输入");
		}
	}
}
//电脑走，随机生成坐标
void ComputerMove(char board[Row][Col], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
       printf("电脑走：\n");
	   x = rand() % row;
	   y = rand() % col;
	   if (board[x][y] == ' ')
	   {
	    	board[x][y] = '$';
	        break;
	   }
	 }		
}
//判断输赢
char IsWin(char board[Row][Col], int row,int col)
{
	int i = 0;
	int j = 0;
	int k = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] != ' ')
			{
				//横着
				for (k = 0; k < 2; k++)
				{
					if ((board[i][j + k] == board[i][j + k + 1] && board[i][j + k] != ' '))
					{
						if (j + k + 1 > col)
						{
							break;
						}
						continue;
					}
					else
					{
						break;
					}
				}
				if (k == 2)
				{
					return board[i][j];
				}
				//竖着
				for (k = 0; k < 2; k++)
				{
					if (board[i + k][j] == board[i + k + 1][j] && board[i + k][j] != ' ')
					{
						if (i + k + 1 > row)
						{
							break;
						}
						continue;
					}
					else
					{
						break;
					}
				}
				if (k == 2)
				{
					return board[i][j];
				}
				//右对角
				for (k = 0; k < 2; k++)
				{
					if (board[i + k][j - k] == board[i + k + 1][j - k - 1] && board[i + k][j - k] != ' ')
					{
						if (j - k - 1 < 0)
						{
							break;
						}
						continue;
					}
					else
					{
						break;
					}
				}
				if (k == 2)
				{
					return board[i][j];
				}
				//左对角
				for (k = 0; k < 2; k++)
				{
					if (board[i + k][j + k] == board[i + k + 1][j + k + 1] && board[i + k][j + k] != ' ')
					{
						if (i + k + 1 < 0)
						{
							break;
						}
						continue;
					}
					else
					{
						break;
					}
				}
				if (k == 2)
				{
					return board[i][j];
				}

			}
		}
	}
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return ' ';
		}
	}
	return 'Q';
}
