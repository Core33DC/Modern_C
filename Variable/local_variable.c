//�� �Լ����� ���� �̸��� ���� ������ ����� ���

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void assign(void);

int main(void)
{
	auto int a = 0;	//auto ���� ����

	assign();
	printf("main �Լ� a : %d\n", a);

	return 0;
}

void assign(void)
{
	int a;

	a = 10;
	printf("assign �Լ� a : %d\n", a);
}

//��������(local variable)�� �ڵ� ����(auto variable)�� ���� ����.
//���� ������ ��� ������ ���� ���η� ���ѵǹǷ� �ٸ� �Լ������� ����� �� ����.
//�׷��� ���� ������ �̸��� ���Ƶ� ����� �Լ��� �ٸ��� ���� ������ ���� ������ ���´�.

//���������� ����
//1. �޸𸮸� ȿ�������� �����.
//2. ����뿡 ������.
