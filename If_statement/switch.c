#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int rank = 2, m = 0;

	switch (rank) //���ǽ��� �����ĸ�
	{
	case 1:	//�⺻������ case�� break�� ����.
		m = 300;
		break;
	case 2:
		m = 200;
		break;
	case 3:
		m = 100;
		break;
	default:
		m = 10;
		break;
	}
}

//������� �߿� switch��
//���ǽ��� �����ĸ� ����ϰ� �⺻������ case�� break�� ������.

//case�� default�� �ǳʶ� ��ġ�� ǥ���ϴ� ���̺�(label)�� ������ ��.
//break�� �ʿ信 ���� ��������. ������ �����Ҷ��� �ڼ��� ����� �Բ� ���������� ����ؾ��Ѵ�.
//(�׳� break ���°� �˾ƺ��⵵ ���ϰ� �׷��� break�� �׳� ���°� ���� ����)
