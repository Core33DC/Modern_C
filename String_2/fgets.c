//fgets �Լ��� ����� ���ڿ� �Է�

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[80];

	printf("������ ���Ե� ���ڿ� �Է� : ");
	fgets(str, sizeof(str), stdin);
	//fgets(str = �迭��, sizeof(str) = �迭�� ũ�� Ȯ��, stdin = ǥ�� �Է�);
	//ù��° �μ��� �迭��, �ι�° �μ��� �迭�� ũ�� Ȯ��, ����° �μ��� ǥ�� �Է�
	//�Է��� ���ڿ��� ������ �׻� �� ���ڸ� �����Ƿ� �ִ�� �迭�� ũ�� - 1���� ���ڸ��� ������
	str[strlen(str) - 1] = '\0';
	//fgets�� ���ۿ� �ִ� ���� ���ڵ� �迭�� �����ϰ� �� ���ڸ� �ٿ� ���ڿ��� �ϼ��Ѵ�.
	//�׷��� ���� ���ڸ� �����ؾ� �ϴµ� �Էµ� ���� ���ڰ� ���ʿ��ϸ� 17�� ����ó�� ����Ͽ� �����Ѵ�.
	//���ž��ϸ� apple jam ������� ���� �� '�Դϴ�'�� ��µ�.
	//���ذ� �ȵǸ� p.328 ����
	//strlen �Լ��� �迭���� �μ��� �޾� �� ���� ���������� ���� ���� ���� ��ȯ��.
	//����Ҷ� string.h ��� ������ ��Ŭ����Ͽ� �����
	printf("�Էµ� ���ڿ��� %s�Դϴ�.\n", str);
	


	return 0;
}

//scanf �Լ��� gets �Լ��� �ԷµǴ� ���ڿ��� ũ�Ⱑ �迭 ũ�⸦ �Ѿ ���輺�� ����
//�̷��� �ǹ����� �Ҵ���� ���� �޸� ������ ħ���ؼ� ���� ���� ���α׷��� ������ �߻� �� �� �ִ�.
//�����ϰ� ���ڿ��� �Է��Ϸ��� �迭 ũ�⸦ Ȯ���ϴ� fgets �Լ��� ����ϴ� ���� ����.
//fgets �Լ��� �ִ� �迭�� ũ������� ���ڿ��� �Է��ϱ� �����̴�.