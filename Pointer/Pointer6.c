//������ �ʴ� �������� ����

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int a = 10;
	int* p = &a;
	double* pd;

	pd = p;
	printf("%lf\n", *pd);

	return 0;
}

//1.�����ʹ� ����Ű�� ������ ���°� ���� ���� �����ؾ���.
//2.�ٸ��ٸ��� �� ��ȯ�� ����Ͽ� �������� ������ �����ϴ�.

//�������� �̻��ϰ� �����µ� ���� a�� ������ ����ؾ� �ϴµ� double *pd�� ���Ǵ� �������� �Ǿ �ٲ���� ��

//double a = 3.4;
//double* pd = &a;
//int* pi;
//pi = (int*)pd; �̷��� �ٲ��ָ� ��.