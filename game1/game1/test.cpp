#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

void game()
{
	int ret = 0;
	char board[Row][Col] = {0};
	InitBoard(board, Row, Col);//初始化二维数组
	while (1)
	{
		PlayMove(board, Row, Col);
		ret = IsWin(board, Row, Col);
		DisplayBoard(board, Row, Col);
		if (ret != ' ')
		{
			break;
		}
		ComputerMove(board, Row, Col);
		ret=IsWin(board, Row, Col);
		DisplayBoard(board, Row, Col);
		if (ret != ' ')
		{
			break;
		}
	}
	if (ret == '*')
		printf("玩家赢!\n");
	else if (ret == '$')
		printf("电脑赢!\n");
	else if (ret == 'Q')
		printf("平局!\n");
}

void menu()
{
	printf("**********************************\n");
	printf("********     1.play        *******\n");
	printf("********     0.exit        *******\n");
	printf("**********************************\n");
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	menu();
	printf("请输入你的选择：>");
	scanf("%d", &input);
	switch (1)
	{
	case 1:
		game();
		break;
	case 0:
		printf("退出游戏\n");
		break;
	default:
		break;
	}
}
int main()
{
	test();
	system("pause");
	return 0;
}