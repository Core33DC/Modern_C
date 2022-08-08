//포인터의 주요 기능 중 하나는 함수 간에 효과적으로 데이터를 공유하는 것!!!!

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void swap(int x, int y); //두 변수의 값을 바꾸는 함수 선언

int main(void)
{
	int a = 10, b = 20;	//변수의 호출과 동시에 함수의 선언

	swap(a, b);	//a, b의 주소를 인수로 주고 함수 호출
	printf("a:%d, b:%d\n", a, b);

	return 0;
}

void swap(int x, int y)	//인수 a, b의 값을 x, y에 복사해서 저장
{
	int temp;	//교환을 위한 임시 변수

	temp = x;	//temp에 x값 저장
	x = y;	//x에 y값 저장
	y = temp;	//y에 temp값 저장
}

//11행에서 함수를 호출할 때 main 함수의 변수 a, b의 값이 복사되어 17행의 매개변수 x, y에 저장된다.
//결국 swap 함수 안에서는 a, b의 복사본을 바꾸므로 main 함수의 두 변수 a, b의 값은 변함이 없게 된다.
//swap 함수에서 매개변수 이름을 a, b로 사용해도 결과는 같다.

