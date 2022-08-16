//strcat�� ����� ���� �Լ��� ����

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>	//strncpy �Լ��� ����ϱ� ���� ������

char* my_strcat(char* pd, char* ps);

int main(void)
{
	char str[80] = "strawberry";

	printf("�ٲٱ� �� ���ڿ� : %s\n", str);
	my_strcat(str, "apple");	//���ڿ� "apple" ����
	printf("���� �� ���ڿ� : %s\n", str);	//strawberry + apple 
	//100���� �����ϴ� strawberry ���� 111�� '\0' ���� apple�� �����Ѵ�.
	printf("�ٸ� ���ڿ� ���� : %s\n", my_strcat(str, "kiwi"));	//��ȯ������ ���
	//116�� '\0'���� kiwi�� ����
	return 0;
}

char* my_strcat(char* pd, char* ps)
{
	char* po = pd;	//�迭�� ó�� ��ġ ����

	while (*pd != '\0')	//pd�� �� ������ ��ġ�� �̵�
	{
		pd++;
	}
	while (*ps != '\0')	//������ʹ� ���ڿ� ����� ����.
	{
		*pd = *ps;
		pd++;
		ps++;
	}

	*pd = '\0';	//���簡 ��� ���� �� ���� ���� ���� �� ���ڷ� ������
	return po;	//�ٿ����� �迭�� ���� ��ġ ��ȯ
}

//strcpy �Լ����� ���ڿ��� ���� �޴� ���� �迭�̾�� �Ѵ�.
//strcat �Լ��� ���ڿ��� ���ʷ� ���� ���� �ʱ�ȭ�� �ؾ� �Ѵ�.
//�迭�� ����� ���� ���ڿ��� ���̸� �˰� ���� �� strlen �Լ��� ����.
//strcmp �Լ��� ���ڿ��� ���� ��� ������ Ȯ���� �� �ִ�.

//������		�����				������

//����			strcpy(str1, str2);		���ڿ� str2�� str1�� ����
//���� ���		strlen(str);			���ڿ� str�� ����(���� ��)�� ���� ��ȯ
//���̱�		strcat(str1, str2);		���ڿ� str2�� str1 ���ڿ� �ڿ� �̾� ����
//��			strcmp(str1, str2);		���ڿ� str1�� str2���� ũ�� 1 ��ȯ
//										���ڿ� str1�� str2���� ������ -1 ��ȯ
//										str1�� str2�� ���� ���ڿ��̸� 0 ��ȯ