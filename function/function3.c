//��ȯ���� ���� �Լ�
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void print_char(char ch, int count); //�Ű����� char ch, int count�� ������ ��ȯ���� ����(void)

int main(void)
{
	print_char('@', 5);

	return 0;
}

void print_char(char ch, int count)
{
	int i;

	for (i = 0; i < count; i++)
	{
		printf("%c", ch);
	}

	return; //��ȯ���� �����Ƿ� return���� ������ �ܵ����� �����.
	//return�� ������ ���� �����ִ� ���ε�, ������ ���� �����Ƿ� ȥ�� ����
	//�Ǵ� return�� ��ü�� �����ϴ� �͵� ������.
}