#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int a = 1;

	while (a < 10) //������ �����ϴ� ���� ���ǽ����� ���ƿ� �ݺ���.
	{
		a = a * 2;
	}
	printf("a : %d\n", a); //������ �������� �ʴ´ٸ� �ݺ��� ������ �������� �ǳʶ�.

	return 0;
}

//���� ������ �����ϴ� ���� ���� ���๮�� �ݺ��ϴ� '�ݺ���'
//���ǽĿ� ���� while��, for��, do ~ while������ ���� �� ����.
//while���� ���ǽ��� ���� �˻��ϰ� ���ǽ��� ���� ���� ���๮�� �ݺ���.
