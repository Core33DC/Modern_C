//정적 지역 변수 static variable

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void auto_func(void);
void static_func(void);

int main(void)
{
	int i;

	printf("일반 지역 변수를 사용한 함수...\n");
	for (i = 0; i < 3; i++)
	{
		auto_func();
	}

	printf("정적 지역 변수(static)을 사용한 함수...\n");
	for (i = 0; i < 3; i++)
	{
		static_func();
	}

	return 0;
}

void auto_func(void)
{
	auto int a = 0;	//지역 변수 초기화

	a++;	//a 값 1 증가
	printf("%d\n", a);	//a 출력
}

//지역변수는 함수가 호출될 때 메[모리에 할당되고 반환될 때 메모리에서 제거되므로 변수 a는 auto_func 함수가 호출될 때마다
//메모리에 새롭게 할당되고 그때마다 0으로 초기화 된다.
//그 값을 1 증가시키고 출력하므로 함수의 호출 횟수와 관계없이 a는 항상 1이 출력된다.


void static_func(void)
{
	static int a;	//정적 지역 변수 선언

	a++;	//a 값 1 증가
	printf("%d\n", a);	//a 출력
}

//static 예약어를 사용하면 저장 공간이 할당되어 유지하는 시점이 함수 호출과 무관함
//static을 사용한 정적 지역 변수는 프로그램이 실행될 때 메모리에 할당되며 프로그램이 끝날 때까지 존재함.
//또한 정적 지역 변수는 초기화하지 않으면 0으로 자동 초기화 됨.

//정적 지역 변수는 저장 공간의 할당이나 초기화 방법, 메모리 존재 기간이 전역 변수와 같음
//즉 선언된 블록 안에서만 사용하는 전역 변수와 같다.
//정적 지역 변수는 함수가 반환되더라도 저장 공간이 계속 유지되므로 함수에 필요한 값을 보관하여 호출할 때마다 계속 사용가능.
