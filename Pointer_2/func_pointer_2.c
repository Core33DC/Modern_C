//�Լ� �������� Ȱ��	//�Լ� �����ͷ� ���ϴ� �Լ��� ȣ���ϴ� ���α׷�

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void func(int(*fp)(int, int));	//�Լ� �����͸� �Ű������� ���� �Լ�
int sum(int a, int b);
int mul(int a, int b);
int max(int a, int b);
//�Լ��� ����
int main(void)
{
	int sel;	//���õ� �޴� ��ȣ�� ������ ����

	printf("01 �� ������ ��\n");
	printf("02 �� ������ ��\n");
	printf("03 �� ���� �߿��� ū �� ���\n");
	printf("���ϴ� ������ �����ϼ��� : ");
	scanf("%d", &sel);
	//�޴� ��µ� �׸��� �޴� ��ȣ �Է�
	switch (sel)
	{
	case 1:
		func(sum);
		break;
	case 2:
		func(mul);
		break;
	case 3:
		func(max);
		break;
	}
	//switch���� �Ἥ 1���̸� sum�Լ�, 2�� mul�Լ�, 3�� ū �� ���ϴ� �Լ� ȣ��
	return 0;
}

void func(int(*fp)(int, int))
{
	int a, b;
	int res;

	printf("�� ������ ���� �Է��ϼ��� : ");
	scanf("%d%d", &a, &b);
	res = fp(a, b);	//�Է��� �� ������ �ְ� fp�� ����Ű�� �Լ� ȣ��
	printf("�ᱣ���� : %d\n", res);
}

int sum(int a, int b)
{
	return (a + b);
}

int mul(int a, int b)
{
	return (a * b);
}

int max(int a, int b)
{
	if (a > b)
	{
		return a;
	}
	else
		return b;
}