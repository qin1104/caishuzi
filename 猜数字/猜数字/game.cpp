#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
void meau()
{
	printf("      ������              \n");
	printf("                    \n");
	printf("      1.��              \n");
	printf("      0.����             \n ");
	printf("                    \n");
	printf("     �������˲������               \n");
	printf("                    \n");

}

void game()
{
	int ret = rand() % 101;
	int a = 0;
	//printf("%d", ret);����
	while (1)
	{
		printf("��������");
		scanf("%d", &a);
		if (a < ret)
			printf("���СŶ��ϸ��\n");
		else if (a > ret)
			printf("�������У�̫����\n");
		else
		{
			printf("��֪����̫����\n������(��ctrl+c���˳���Ϸ\n");
			break;
	    }
    }
}



int main()
{
	srand((unsigned int)time(NULL));
	meau();		
	printf("��ѡ��:");
	int c = 0;
	scanf("%d", &c);

	do
	{
	
		switch (c)
		{
		case 1:
			
			printf("��Ϸ��ʼ�\n");
			game();
			break;
		case 0:
			printf("he������\n");
			break;
		default:
			printf("???,ɵ��\n");
			scanf("%d", &c);
			break;

		}
		


	} while (c);

}