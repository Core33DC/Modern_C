//�迭 ����� ������ �ٸ� �迭�� ����ϴ� �Լ�

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void print_ary(int* pa, int size);

int main(void)
{
	int ary1[5] = { 10, 20, 30, 40, 50 };	//�迭��Ұ� 5���� �迭
	int ary2[7] = { 10, 20, 30, 40, 50, 60, 70 };	//�迭��Ұ� 7��

	print_ary(ary1, 5);	//ary1 �迭 ���
	printf("\n");
	print_ary(ary2, 7);	//ary2 �迭 ���

	return 0;
}

void print_ary(int* pa, int size)
{
	int i;

	for (i = 0; i < size; i++)	//size�� ���� ���� �ݺ� Ƚ�� ����
	{
		printf("%d ", pa[i]);
	}
}