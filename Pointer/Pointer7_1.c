//�����;��� �� ������ ���� �ٲٴ� �Լ�

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void swap(void);

int main(void)
{
	int a = 10, b = 20;	//������ ȣ��� ���ÿ� �Լ��� ����

	swap();	//�μ� ���� �Լ� ȣ��
	printf("a:%d, b:%d\n", a, b);

	return 0;
}

void swap(void)	//�μ��� �����Ƿ� �Ű������� ����
{
	int temp;	//��ȯ�� ���� �ӽ� ����

	temp = a;	//temp�� main �Լ��� a �� ����
	a = b;	//main �Լ��� a�� main �Լ��� b �� ����
	b = temp;	//main �Լ��� b�� temp �� ����
}

//�Լ� �ȿ� ����� �������� ��� ������ �Լ� ���η� ���ѵǹǷ� main �Լ��� �ִ� ���� a, b�� �ٸ� �Լ���
//swap �Լ����� �� �̸��� ����� �� ����.