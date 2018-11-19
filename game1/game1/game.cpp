#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"
//��ʼ������
void InitBoard(char board[Row][Col], int row, int col)
{
	memset(&board[0][0], ' ', row*col*sizeof(board[0][0]));
}
//��ӡ����
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
//�����
void PlayMove(char board[Row][Col], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("����ߣ�������λ��:> ");
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
				printf("��λ�ñ�ռ��\n");
			}
		}
		else
		{
			printf("λ�����������������������");
		}
	}
}
//������
void ComputerMove(char board[Row][Col], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
       printf("�����ߣ�\n");
	   x = rand() % row;
	   y = rand() % col;
	   if (board[x][y] == ' ')
	   {
	    	board[x][y] = '$';
	        break;
	   }
	 }		
}
//�ж���Ӯ
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
				//����
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
				//����
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
				//�ҶԽ�
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
				//��Խ�
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
