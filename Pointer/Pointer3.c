//�����͸� ����� �� ������ �հ� ��� ���

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int a = 10, b = 15, total;	//���� ����� ���ÿ� �ʱ�ȭ
	double avg;	//����� ������ ����
	int* pa, * pb;	//������ ���ü���
	int* pt = &total;	//������ ����� ���ÿ� �ʱ�ȭ, (�ּ� ���Ե� �Բ�)
	double* pg = &avg;	//double�� ������ ����� ���ÿ� �ʱ�ȭ, (�ּ� ���Ե� �Բ�)

	pa = &a;	//������ pa�� ���� a�� �ּ� ����
	pb = &b;	//������ pb�� ���� b�� �ּ� ����

	*pt = *pa + *pb;	//a ���� b���� ���� total�� ����
	*pg = *pt / 2.0;	//total ���� 2�� ���� ���� avg�� ����

	printf("�� ������ �� : %d, %d\n", *pa, *pb);	//a ���� b �� ���
	printf("�� ������ �� : %d\n", *pt);	//total �� ���
	printf("�� ������ ��� :  %.1lf\n", *pg);	//avg �� ���

	return 0;
}