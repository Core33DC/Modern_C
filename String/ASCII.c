//�빮�ڸ� �ҹ��ڷ� ���� @@���� �����Ѵٸ� �ҹ��ڸ� �빮�ڷ� ���氡�� �׸��� �Է°��� �ִ� �͵� ����

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	char small, cap = 'G';	//cap�� ����� ���� 'G'�� �ƽ�Ű�ڵ尪�� 71�̴�.
	//���� ����� 4����Ʈ�� ũ�⸦ ������ �ƽ�Ű �ڵ� ���� 0 ~ 127�� ������ �����Ƿ� 2������ �ٲٸ�
	//���� 3����Ʈ�� ��� 0�� �ǰ� ������ 1����Ʈ�� �ǹ̸� ���´�.
	//@@���� ���ڴ� 1����Ʈ ũ���� char�� ������ ������ ����� �� �ִ�.

	if ((cap >= 'A') && (cap <= 'Z'))	//�빮�� �������
	{
		small = cap + ('a' - 'A');	//��/�ҹ����� ���̸� ���� �ҹ��ڷ� ��ȯ�Ѵ�. 97-65�� 32�̹Ƿ� �� ���̸� �����ָ� �ҹ��ڰ� ����
		//���� �Է��ϴ� �Լ��� ����� �ϸ��� if else�� small - ('a' - 'A');�� ���ָ� �ɵ�
	}

	printf("�빮�� : %c %c", cap, '\n');	//'\n'�� %c�� ����ϸ� ���� �ٲ��.
	printf("�ҹ��� : %c", small);

	return 0;
}

//���ڹ��� 0 ~ 9�� �ƽ�Ű�ڵ尪���� 48 ~ 57
//�빮�� A ~ Z�� 65 ~ 90
//�ҹ��� a ~ z�� 97 ~ 122
//Ư������
//����� \0, \t, \n, \r