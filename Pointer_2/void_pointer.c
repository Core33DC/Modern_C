//void ������

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int a = 10;
	double b = 3.54;
	void* vp;

	vp = &a;
	printf("a : %d\n", *(int*)vp);

	vp = &b;
	printf("b : %.2lf\n", *(double*)vp);

	return 0;
}

//�ּҴ� ����Ű�� �ڷ����� ��ġ�ϴ� �����Ϳ��� ������ ������
//���� ����Ű�� �ڷ����� �ٸ� �ּҸ� �����ϴ� ����� void �����͸� ����ؾ� �Ѵ�.!!!!

//void �����ʹ� ����Ű�� �ڷ����� ������ ���� �����Ƿ� � �ּҵ� ������ �� ����
//���� ���� ������ ���� ���� �����̳� ������ ���ϴ� ������ ������ �Ұ�����
//���� ���� ������ �Ϸ��� �� ����Ʈ�� � ���·� �о�� �ϴ��� �˾ƾ� �ϴµ�, � �ּҰ� ���� �� �� �����Ƿ� ������ �Ұ�����
//�̴� ���� ���굵 ����������
//�׷��� void �����͸� ����ؾ� �ϴ� ����� ���� ���ϴ� ���·� ��ȯ�Ͽ� �����
//14���� (int*)ó�� 17���� (double*)ó�� ��ȯ�ؼ� ���