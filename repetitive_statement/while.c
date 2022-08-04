#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int a = 1;

	while (a < 10) //조건을 만족하는 동안 조건식으로 돌아와 반복함.
	{
		a = a * 2;
	}
	printf("a : %d\n", a); //조건이 만족하지 않는다면 반복문 이후의 문장으로 건너뜀.

	return 0;
}

//일정 조건을 만족하는 동안 같은 실행문을 반복하는 '반복문'
//조건식에 따라 while문, for문, do ~ while문으로 나눌 수 있음.
//while문은 조건식을 먼저 검사하고 조건식이 참인 동안 실행문을 반복함.

