//함수 포인터의 활용	//함수 포인터로 원하는 함수를 호출하는 프로그램

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void func(int(*fp)(int, int));	//함수 포인터를 매개변수로 갖는 함수
int sum(int a, int b);
int mul(int a, int b);
int max(int a, int b);
//함수들 선언
int main(void)
{
	int sel;	//선택된 메뉴 번호를 저장할 변수

	printf("01 두 정수의 합\n");
	printf("02 두 정수의 곱\n");
	printf("03 두 정수 중에서 큰 값 계산\n");
	printf("원하는 연산을 선택하세요 : ");
	scanf("%d", &sel);
	//메뉴 출력들 그리고 메뉴 번호 입력
	switch (sel)
	{
	case 1:
		func(sum);
		break;
	case 2:
		func(mul);
		break;
	case 3:
		func(max);
		break;
	}
	//switch문을 써서 1번이면 sum함수, 2는 mul함수, 3은 큰 값 구하는 함수 호출
	return 0;
}

void func(int(*fp)(int, int))
{
	int a, b;
	int res;

	printf("두 정수의 값을 입력하세요 : ");
	scanf("%d%d", &a, &b);
	res = fp(a, b);	//입력한 두 정수를 주고 fp가 가리키는 함수 호출
	printf("결괏값은 : %d\n", res);
}

int sum(int a, int b)
{
	return (a + b);
}

int mul(int a, int b)
{
	return (a * b);
}

int max(int a, int b)
{
	if (a > b)
	{
		return a;
	}
	else
		return b;
}