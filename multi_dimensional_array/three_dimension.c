//3���� �迭 �ʱ�ȭ	//2�� �� 3�� �л��� 4���� ������ �����ϴ� 3���� �迭

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int score[2][3][4] = {
		{{72, 80, 95, 60}, {80, 90, 23, 46}, {34, 23, 34, 66}},
		{{34, 55, 66, 77}, {34, 55, 66, 77}, {99, 99, 99, 99}}
	};
	//3���� �迭�� �ʱ�ȭ�� ���� �����ϴ� �߰�ȣ�� �߰��Ǿ� �߰�ȣ�� 3�� �����
	int i, j, k;	//�ݺ� �����

	for (i = 0; i < 2; i++)	//�� ����ŭ
	{
		printf("%d�� ����...\n", i + 1);	//���� �ٲ� ���
		for (j = 0; j < 3; j++)	//�л� ����ŭ
		{
			for (k = 0; k < 4; k++)	//���� ���� ����ŭ
			{
				printf("%5d", score[i][j][k]);	//���� ���
			}
			printf("\n");	//�� �л��� ������ ����ϰ� �� �٤ò�
		}
		printf("\n");	//�� ���� ������ ����ϰ� �� �ٲ�
	}

	return 0;
}

//3���� �迭�� ��, ��, ���� ������ �ȴ�.
//3���� �迭 score���� score[0], score[1] 2���� ��κй迭�� �� ��κй迭�� �����ϴ� 3������ ��κй迭�� ������.

//3���� �迭�� ������ ������ �޸� ���������δ� int�� ���� 24���� �� �� ���� ������ �������� �޸𸮿� ���� �Ҵ��
//���ӵ� ���� ������ 3���� ÷�ڷ� �� �� ���� ���� ���������� ������ �� �ֵ��� ������.