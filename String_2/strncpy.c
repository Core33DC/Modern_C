//strncpy �Լ��� ����

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>	//strncpy �Լ��� ����ϱ� ���� ������

int main(void)
{
	char str[20] = "mango tree";	//�迭 �ʱ�ȭ

	strncpy(str, "apple-pie", 5);	//"apple-pie"���� �ټ����ڸ� ����
	//str = ������� �迭��
	//apple-pie = ������ �迭��
	//5 = ������ ���� ��

	printf("%s\n", str);	//���� ���� ���ڿ� ���

	return 0;
}

//���ϴ� ������ ���ڸ��� �����ϴ� strncpy �Լ�
//strncpy �Լ��� ������ ���ڿ����� ������ ������ŭ ���ڸ� �����ϰ� '�� ���ڴ� �������� �ʴ´�.'
//���� str �迭���� mango���� apple�� �ٲ�Ƿ� �ᱹ str �迭�� ����� ���ڿ��� apple tree�� �ȴ�.
//���� apple�θ� ���̵��� �Ϸ��� apple�� ������ �Ŀ� �� ���ڸ� ������ �����ؾ� �Ѵ�.
//�� 16�࿡ str[5] = '\0';�� �߰��ϸ� �ȴ�. 