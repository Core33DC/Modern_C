//�����Ϳ� const ���

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int a = 10, b = 20;
	const int* pa = &a; //������ pa�� ���� a�� ����Ų��. ������ pa�� ������ �� const�� ���ȭ ó��

	printf("���� a�� �� : %d\n", *pa);  //�����͸� ���������Ͽ� a ���
	
	pa = &b;	//�����Ͱ� ���� b�� ����Ű�� �Ѵ�.

	printf("���� b�� �� : %d\n", *pa);	//�����͸� ���������Ͽ� b ���
	//������ pa�� �����Ҷ� const�� ���ȭ �Ͽ����� ��� ����� �����ϰ� ���� b�� �ּҸ� �����ϰ� �� ���� ���� �����Ͽ� ����ϰ� ����.
	//�ռ� �����Ϳ� ���� const�� �ǹ̴� �ٷ� 'pa�� ����Ű�� ���� a'�� 'pa�� ���� �����Ͽ� �ٲ� �� ����.'
	//�׷��� ���� �ؿ� 23�࿡�� *pa=20;�� ���� pa�� ���� a���� �ٲٰ��� �Ѵٸ� �����޼����� ����.


	pa = &a;	//�����Ͱ� �ٽ� ���� a�� ����Ų��.
	a = 20;	//a�� ���� �����Ͽ� ���� �ٲ۴�.
	//*pa = 20; �̷��Էδ� �ȵȴٴ� ���̴�.
	//�̷��� �Ѵٸ� �����޽����� l-value�� const ��ü�� �����Ѵٰ� ��.
	
	printf("���� a�� �� : %d\n", *pa);	//�����ͷ� ���� �����Ͽ� '�ٲ� ��' ���

	return 0;
}

//���� a�� �������� �����͸� ���ؼ��� �ٲ� �� ���� ���� a ��ü�� ����ϸ� �󸶵��� �ٲ� �� �ִµ� ��!!!!! const�� ������??
//�� �����δ� �����Ϳ� const�� ����ϴ� ��ǥ���� ���� ���ڿ� ����� �μ��� �޴� �Լ��̴�.
//���ڿ� ����� ���� �ٲ�� �� �Ǵ� ���� �����̹Ƿ� �Լ��� �Ű������� ���ؼ� ���� �ٲ� �� ������ �Ű������� ����� �����Ϳ� const�� ����Ѵ�.
//������ �򰥸����� ���ڿ��� �������� ���踦 �����ϸ� �� �����ϱ� ������

//###!!!!
//�Ƹ� ������ pa�� �Ҵ�� ������ �ٲٸ��� �ȵǳ�����... ��.. �ù� ����Ǿ��ִ� ������ �ٲ�� ������ ���� �������� �޸� ������ �Ͼ��???