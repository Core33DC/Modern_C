#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int a = 10;

	if (a >= 0)  //���ǽ�
	{
		a = 1;  //���๮1
	}
	else  //else���� ���ǽ��� ������� ����.else���� ���๮�� �ѹ����� ��� �߰�ȣ ���� ����
	{
		a = -1;  //���๮2
	}
	// ��쿡 ���� if���� ����ϴ� �ͺ��� if ~else���� �� �� ����ϴ� ���� ����.

	printf("a : %d\n", a);

	return 0;
}

//���� if���� �� �� ����ص� ������ ���� ��ġ�� ������ �ϳ��� ���� �ǹǷ� �ᱹ �� ���常 �����
//���� �׻� ���ǽ��� �� �� �˻��ϹǷ� �� �� �˻��� ������ ���� �ӵ��� ������ �� �ִ�.
//�׷��Ƿ� 2���� ���๮ �߿� �ϳ��� �����ϴ� ��쿡�� �������� if ~ else���� ������ �ϴ°� ����