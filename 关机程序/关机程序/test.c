#define _CRT_SECURE_NO_DEPRECATE 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//
//
//int main()
//{
//	char input[20] = { 0 };
//	//����ʱ�ػ�
//	system("shutdown -s -t 60");
//
//	while (1)
//	{
//		printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n");
//		scanf("%s", input);
//		//�ж��û�������ǲ��ǣ�������
//		if (0 == strcmp(input, "������"))//2���ַ����Ƚϲ���ʹ��==��Ҫʹ��strcmp  string compare
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}



int main()
{
	char input[20] = { 0 };
	//����ʱ�ػ�
	system("shutdown -s -t 60");

again:
	printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n");
	scanf("%s", input);
	//�ж��û�������ǲ��ǣ�������
	if (0 == strcmp(input, "������"))//2���ַ����Ƚϲ���ʹ��==��Ҫʹ��strcmp  string compare
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}
