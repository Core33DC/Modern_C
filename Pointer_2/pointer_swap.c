//������ ���� �ٲٴ� �Լ��� �Ű�����	//���������͸� ����� ������ ��ȯ

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void swap_ptr(char** ppa, char** ppb);	//�Ű������� ���� ������ ���

int main(void)
{
	char* pa = "success";
	char* pb = "failure";

	printf("pa -> %s, pb -> %s\n", pa, pb);	//�ٲٱ� ��
	swap_ptr(&pa, &pb);	//pa, pb�� �ּҸ� �μ��� �ְ� �Լ� ȣ��
	printf("pa -> %s, pb -> %s\n", pa, pb);	//�ٲ� ��

	return 0;
}

void swap_ptr(char** ppa, char** ppb)
{
	char* pt;

	pt = *ppa;
	*ppa = *ppb;
	*ppb = pt;
}

//�߿��� ������ ���ڿ��� �ٲ� ��������� ���ڿ� ��ü�� �ٲ��� �ʴ� �Ŷ�� ��
//���ڿ��� �����ϴ� �������� ���� �ٲٸ� ���� ���°� �ٲ�Ƿ�
//�� �Ŀ� �����͸� ����ϸ� ��ġ ���ڿ��� �ٲ� ��ó�� ����� �� ����

//p.423 ~ 424 �׸� ����