//���ȣ�� 3����
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void fruit(int count); //���� �Լ� �������ֽð�� //3���� �ҰŴϱ� �Ű����� �߰����ֽð��

int main(void)
{
	fruit(1); //�Լ� ȣ��~

	return 0;
}

void fruit(int count) //���ȣ�� �Լ� ����
{
	printf("apple\n");
	if (count == 3) //�̷��� if���� ����ϸ� ȣ�� Ƚ���� ���ϴ� ��ŭ ���� ����
		return;
	fruit(count + 1);  //�ڽ��� �ٽ� ȣ��
}