//���ȣ��
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void fruit(void); //���� �Լ� �������ֽð��

int main(void)
{
	fruit(); //�Լ� ȣ��~

	return 0;
}

void fruit(void) //���ȣ�� �Լ� ����
{
	printf("apple\n");
	fruit();  //�ڽ��� �ٽ� ȣ��
}


//�����ϸ� �������� ��� ��µǴٰ� ����Ǵµ� ȣ�⸸���ε� ���� ũ���� �޸𸮸� ����ϹǷ�
//�������� ȣ���ϸ� ���α׷� �ϳ��� �� �� �ִ� �޸𸮸� ��� ����Ͽ� ���� �����.