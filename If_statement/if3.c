#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int a = 10, b = 20;

	if (a < 0)
	{
		if (b > 0)
		{
			printf("ok");
		}
	}
	else
	{
		printf("ok");
	}

	return 0;
}

//�ѹ����̹Ƿ� �߰�ȣ ������ ���������� 10, 15���� �߰�ȣ�� �����ϸ��� �ȵȴ�.
//�� ������ if���� ��ø�� ��� else�� ���� ����� if�� �����ϴµ� �װ� 11�� if�� 16�� els���� ����� �������� �ؼ��ϱ� ����
//�׷��Ƿ� ��ø if���� ���� �߰�ȣ ������ ���ϴ� ���� ����.