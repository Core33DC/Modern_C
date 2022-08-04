#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int a = 20, b = 10;
	//중첩 if문
	if (a > 10) // a의 초깃값이 20이므로 조건식이 참이 되어 중첩되있는 if문을 실행함.
	{
		if (b >= 0)
		{
			b = 1;
		}
		else
		{
			b = -1;
		}
	}

	printf("a : %d, b : %d\n", a, b);

	return 0;
}

//중첩 if문
//중첩문을 쓰는 이유는 선행조건이 있으면 불필요한 조건 검사를 하지 않는 다는 것이고,
//논리곱(&&)연산으로 쓰면은 실행 효율도 떨어지고 거짓이면 불필요한 연산을 줄일 수 있음.
