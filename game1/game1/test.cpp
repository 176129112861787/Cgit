三子棋小游戏，大致分为三个方面，玩家走，电脑走，判断输赢。其中呢，玩家走函数通过玩家输入坐标来确定位置，电脑走则是利用随机生成函数来确定位置，接下来
重点来了，判断输赢函数实现起来是有点不容易的。这个函数呢，如果对于三子棋盘玩三子棋来说，可用两次相等来确定三个棋子是否相等，但是代码写成这样，不方便
拓展。因此，接下来，要实现拓展的功能，可用一个for循环来进行元素相等比较，三子棋，循环两次，五子棋，可循环四次.....

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
