#define _CRT_SECURE_NO_DEPRECATE 1

//
//��������Ϸ
//1�������������һ��1��100֮�������
//2����Ҳ�����
//   ����¶��ˣ�����ʾ���¶���
//   ����´��ˣ�����ʾ���´��ˣ����߲�С�ˣ�֪������ȷ
//3��������
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Menu()
{
	printf("**************************************\n");
	printf("*************  1.play  ***************\n");
	printf("*************  0.exit  ***************\n");
	printf("**************************************\n");
}

void game()
{
	//1.���������
	int ret = rand() % 100 + 1;
	/*printf("%d\n", ret);    ������Կ����ɵ������    */

	//2.������
	int guess = 0;
	while (1)
	{
		printf("�������:>");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("��С��\n");
		}
		else if (guess > ret)
		{
			printf("�´���\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
	}
}

int main()
{
	int input = 0;

	//�����������������㡪��ע�ⲻҪƵ������
	srand((unsigned int)time(NULL));
	do
	{
		Menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
	} while (input);

	return 0;
}

//���潲��һ��C����ʵ�ֲ�������Ϸ���ѵ�:
//1������������ɡ������Ǵ���ȥ��һ��ʱ���
//2���м���İ���ĺ���������CSDN����