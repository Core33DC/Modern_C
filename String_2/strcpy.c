//strcpy �Լ��� ����

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>	//strcpy �Լ��� ����ϱ� ���� ������

int main(void)
{
	char str1[80] = "strawberry";
	char str2[80] = "apple";
	char* ps1 = "banana";	//�����ͷ� ���ڿ� ��� ����
	char* ps2 = str2;

	printf("���� ���ڿ� : %s\n", str1);
	strcpy(str1, str2);
	printf("�ٲ� ���ڿ� : %s\n", str1);

	strcpy(str1, ps1);
	printf("�ٲ� ���ڿ� : %s\n", str1);

	strcpy(str1, ps2);
	printf("�ٲ� ���ڿ� : %s\n", str1);

	strcpy(str1, "banana");	//���ڿ� ��� ���
	printf("�ٲ� ���ڿ� : %s\n", str1);
	//���⼭ �ι�° �μ��� �پ��� ���� ����� �� ������ ù ��° �μ��� ����� �� �ִ� ���� �������̴�.
	
	//! �߿� ù ��° �μ��� char �迭�̳� �迭���� ������ �����͸� ����� �� �ִ�.
	//! �߿� �� ��° �μ��� ���ڿ��� ���� ��ġ�� �� �� �ִٸ� � ���̵� ����� �� �ִ�.
	return 0;

}


//���ڿ��� �����Ҷ� �ٸ� ���ڿ��� �ٲٴ� ���� ���ڸ� �ϳ��� �Űܾ� �ϴ� ���ŷο��� �ִ�.
//�� �餷�� strawberry�� ����� �迭�� apple�� �ٲٷ���
//char str1[80] = "strawberry";
//str1[0] = 'a'
//str1[1] = 'p'
//str1[2] = 'p'
//str1[3] = 'l'
//str1[4] = 'e'
//str1[5] = '\0'
//�̷��� ���־�� �ϴµ� ���� ���ŷο�� strcpy �Լ��� ����ϴµ�
//strcpy(str1, str2)�� ������ָ� �ȴ�.
//str1 -> str2
//str1�� ������� ��, str2 ������ ������ ������ �ȴ�. 

