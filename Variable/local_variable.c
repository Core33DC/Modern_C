//두 함수에서 같은 이름의 지역 변수를 사용한 경우

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void assign(void);

int main(void)
{
	auto int a = 0;	//auto 생략 가능

	assign();
	printf("main 함수 a : %d\n", a);

	return 0;
}

void assign(void)
{
	int a;

	a = 10;
	printf("assign 함수 a : %d\n", a);
}

//지역변수(local variable)와 자동 변수(auto variable)은 같은 용어다.
//지역 변수는 사용 범위가 블록 내부로 제한되므로 다른 함수에서는 사용할 수 없다.
//그래서 지역 변수는 이름이 같아도 선언된 함수가 다르면 각각 독립된 저장 공간을 갖는다.

//지역변수의 장점
//1. 메모리를 효율적으로 사용함.
//2. 디버깅에 유리함.

