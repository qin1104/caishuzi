#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
void meau()
{
	printf("      猜数字              \n");
	printf("                    \n");
	printf("      1.玩              \n");
	printf("      0.不玩             \n ");
	printf("                    \n");
	printf("     不会有人不会玩吧               \n");
	printf("                    \n");

}

void game()
{
	int ret = rand() % 101;
	int a = 0;
	//printf("%d", ret);看答案
	while (1)
	{
		printf("输入数字");
		scanf("%d", &a);
		if (a < ret)
			printf("你好小哦，细狗\n");
		else if (a > ret)
			printf("啊，不行，太大了\n");
		else
		{
			printf("你知道的太多了\n重来：(按ctrl+c）退出游戏\n");
			break;
	    }
    }
}



int main()
{
	srand((unsigned int)time(NULL));
	meau();		
	printf("请选择:");
	int c = 0;
	scanf("%d", &c);

	do
	{
	
		switch (c)
		{
		case 1:
			
			printf("游戏开始喽\n");
			game();
			break;
		case 0:
			printf("he，急了\n");
			break;
		default:
			printf("???,傻了\n");
			scanf("%d", &c);
			break;

		}
		


	} while (c);

}