//���ȣ�� 3����
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void fruit(int count); //���� �Լ� �������ֽð��� //�Ű����� �߰����ֽð���

int main(void)
{
	fruit(1); //�Լ� ȣ��~

	return 0;
}

void fruit(int count) //ȣ�� Ƚ���� �Ű������� ����
{
	printf("apple\n");
	if (count == 3) //�̷��� if���� ����ϸ� ȣ�� Ƚ���� ���ϴ� ��ŭ ���� ����
		return;
	fruit(count + 1);  //�ڽ��� �ٽ� ȣ��
	printf("jam\n");
}

//�׷��� �� �ݺ����� ���� �� ���ȣ����� ������ �� ����?

//���⼭ ������� apple apple apple jam jam �� ���ʴ�� �����µ� �� ������
//���ȣ�� �Լ��� ���� ȣ���� ���� �ƴ϶� ������ ȣ��ƴ� ������ ���ư��� �����̴�. 
//�ڵ尡 ������� �ؼ� ������ C��� å 202���� ���� ���� ���� ���� ������.

//�� ���ȣ���� �ϳ��� �Լ����� �ڵ带 �ݺ� �����ϴ� ��ó�� ��������
//�����δ� ���ο� �Լ��� �����ϴ� �Ͱ� ����.

//���ȣ���Լ��� �׷��� ��쿡 ���� ������ �ݺ����� ������ ǥ���� �� ������
//�ڵ��бⰡ ���� �ʰ� �ݺ� ȣ��Ǹ鼭 �޸𸮸� ����ϹǷ� ���������� ���°� ����.