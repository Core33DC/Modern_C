//2���� �迭 �ʱ�ȭ	//2���� char �迭�� ���� �̸��� �ʱ�ȭ�ϴ� ���

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	char animal1[5][20] = {
		{'d', 'o', 'g', '\0'},
		{'t', 'i', 'g', 'e', 'r', '\0'},
		{'c', 'a', 't', '\0'},
		{'r', 'i', 'o', 'n', '\0'},
		{'m', 'a', 'n', '\0'}
	};

	char animal2[][10] = { "dog", "tiger", "cat", "rion", "man" };
	int i;
			
	//		�迭��ü�� ũ��  �κй迭 �ϳ��� ũ��
	for (i = 0; i < 5; i++)
	{
		printf("%s	", animal1[i]);
	}
	printf("\n");

	for (i = 0; i < 5; i++)
	{
		printf("%s	", animal2[i]);
	}

	return 0;
}

//2���� char �迭�� char�� �������� �����̹Ƿ� �⺻������ �� ������ ���� ����� �ʱ�ȭ�� �� ����
//�̷��� �ϸ� ��¥ ���� �ð��� ���� �ɸ��� ������ �ù�

//�׷��� 2���� char �迭�� 1���� char �迭�� ��ҷ� �����Ƿ� �� ���� �Ǵ� 1���� char �迭�� '���ڿ�'�� �ʱ�ȭ ������. ���� ���ڿ� ����
//
//char animal1[10] = "dog";
//char animal2[10] = "gier";
//char animal3[10] = "dasf";
//char animal4[10] = "ddsfh";
//char animal5[10] = "drgegg";

//���� 1���� char �迭 5���� 2���� char �迭�� �����ϰ� �ʱ�ȭ�ϸ� ������ ���� �� �� ����.
//char animal2[][10] = { "dog", "asdf", "qwef", "adfhg", "asdfef" };