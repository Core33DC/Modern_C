//strcmp, strncmp �Լ��� ����� ���ڿ� ��

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>	//strncpy �Լ��� ����ϱ� ���� ������

int main(void)
{
	char str1[80] = "pear";
	char str2[80] = "peach";

	printf("������ ���߿� ������ ���� �̸� : ");

	if (strcmp(str1, str2) > 0)
	{
		printf("%s\n", str1);
	}
	else
		printf("%s\n", str2);

	return 0;
}

//strcmp �Լ��� �۵��ϴ� ������ �켱 ù ������ \�ƽ�Ű �ڵ� ���� ����.
//ù ���ڰ� ������ ���� ������ �ƽ�Ű �ڵ� ���� ���ʷ� ����.
//�׷��� �빮�� �ҹ��� ������ ���ؾ� �� ����!!!

//strncmp �Լ��� strcmp �Լ��� ���� ������ ���� ���� ���� �� ��° �μ��� ������ �� �ִ�.
//�� pear�� epach�� �տ������� 3���� ���ڸ� ���ϴ� ��� ����� 0�� ��ȯ��.

//printf("�տ��� 3���� ���ڸ� ���ϸ�?\n");
//if (strncmp(str1, str2, 3) == 0)
//	printf("����\n");
//else
//	printf("�ٸ���.\n");

