//포인터없이 두 변수의 값을 바꾸는 함수

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void swap(void);

int main(void)
{
	int a = 10, b = 20;	//변수의 호출과 동시에 함수의 선언

	swap();	//인수 없이 함수 호출
	printf("a:%d, b:%d\n", a, b);

	return 0;
}

void swap(void)	//인수가 없으므로 매개변수도 없음
{
	int temp;	//교환을 위한 임시 변수

	temp = a;	//temp에 main 함수의 a 값 저장
	a = b;	//main 함수의 a에 main 함수의 b 값 저장
	b = temp;	//main 함수의 b에 temp 값 저장
}

//함수 안에 선언된 변수명은 사용 범위가 함수 내부로 제한되므로 main 함수에 있는 변수 a, b는 다른 함수인
//swap 함수에서 그 이름을 사용할 수 없다.