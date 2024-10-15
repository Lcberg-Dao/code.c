#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void menu()
{
	printf("****************************\n");
	printf("*****    开始游戏-1    *****\n");
	printf("*****    结束游戏-0    *****\n");
	printf("****************************\n");
}

//正式开始游戏
void game()
{
	char hide[Rows][Cols];
	char show[Rows][Cols];
	char set1 = '0';
	char set2 = '.';

	// 布置雷的棋盘初始化
	initialize_board(hide, Rows, Cols, set1);
	
	//排雷棋盘初始化
	initialize_board(show, Rows, Cols, set2);

	//排雷棋盘打印
	print_board(show, Row, Col);

	//布置雷
	layout_tunter(hide, Row, Col, number);

	//排查雷
	mine(hide, show, Rows, Cols, number);
}

int main()
{
	int input = 0;
	do {
		//游戏目录
		menu();
		srand((unsigned int)time(NULL));
		printf("是否开始游戏(1/0):");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("游戏结束\n");
			break;
		default:
			printf("输入无效，请重新输入\n");
			break;
		}
	} while (input);


	return 0;
}