//두 함수에서 같은 이름의 지역 변수를 사용한 경우

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int a = 10, b = 20;

	printf("교환 전 a와 b의 값 : %d, %d\n", a, b);
	
	//블록 시작
	{
		int temp;	//temp 변수 선언

		temp = a;
		a = b;
		b = temp;
	}
	//블록 끝
	//15행에 선언된 temp 변수는 블록 안에 선언된 지역 변수이므로 사용 범위가 그 블록내부로 제한됨.

	printf("교환 후 a와 b의 값 : %d, %d\n", a, b);

	return 0;
}

//블록이 중첩된 경우 주의해야 될게 있는데
//사용 가능한 변수가 둘 이상이면 가장 가까운 블록에 선언된 별수를 사용.