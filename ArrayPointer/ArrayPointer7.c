//�迭�� ���� �Է��ϴ� �Լ�

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void input_ary(double* pa, int size);	//�Լ� ����
double find_max(double* pa, int size);	//�Լ� ����

int main(void)
{
	double ary[5];	
	double max;	//�ִ��� ������ ����
	int size = sizeof(ary) / sizeof(ary[0]);	//�迭 ����� ���� ���

	input_ary(ary, size);	//�迭�� �� �Է�
	max = find_max(ary, size);	//�迭�� �ִ� ��ȯ
	printf("�迭�� �ִ� : %.1lf\n", max);

	return 0;
}

void input_ary(double* pa, int size)	//double �����͸� �Ű������� ����
{
	int i;

	printf("%d���� �Ǽ��� �Է� : ", size);
	for (i = 0; i < size; i++)	//size�� ���� ���� �ݺ� Ƚ�� ����
	{
		scanf("%lf", pa + i);	//&pa[i]�� ����, �Է��� �迭 ����� �ּҸ� ����
	}
}

double find_max(double* pa, int size)	//�迭���� ���� ū ���� ã�� ��ȯ�ϴ� �Լ�
{
	double max;
	int i;

	max = pa[0];	//�켱 ù ��° �迭 ����� ���� �ִ����� ����
	for (i = 0; i < size; i++)	//�� ��° �迭 ��Һ��� max�� ��
	{
		if (pa[i] > max)
			max = pa[i];	//���ο� �迭 ����� ���� max���� ũ�� ����
		//�׷��� ù° ���� ���࿡ 20�̰� �ι�° �Է°��� 10�̸� �״�� 20�� �ԷµǾ��ִ� ���°�
		//���� �Է°��� 21�̸� 21�� �Էµǰ� ���� 4��° �Է� ���� 4�̸� �״�� 21�� �ԷµǾ� �ִ� ���´�
	}

	return max;	//�ִ� ��ȯ
}