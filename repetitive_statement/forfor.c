#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main(void)
//{
//	int i, j;
//
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


//��ø �ݺ��� 1. ��1���� �׸���. 2. 5�� �ݺ��Ѵ�. 3. �װ� 3�� �ݺ��Ѵ�.
//�ᱣ���� 
//*****
//*****
//*****

//�̷��� ����.

//�ٱ��� for�� ���� ���� �� ���� for�� ����

//��ø�ݺ������� ������ ����


int main(void)
{
	int i, j;

	for (i = 2; i < 10; i++)
	{
		for (j = 1; j < 10; j++)
		{
			printf("%d * %d = %d\n", i, j, i * j);
		}
	}

	return 0;
}
