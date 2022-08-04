#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int a = 10, b = 20;

	if (a < 0)
	{
		if (b > 0)
		{
			printf("ok");
		}
	}
	else
	{
		printf("ok");
	}

	return 0;
}

//한문장이므로 중괄호 생략이 가능하지만 10, 15행의 중괄호를 생략하면은 안된다.
//그 이유는 if문이 중첩된 경우 else를 가장 가까운 if와 연결하는데 그게 11행 if와 16행 els문을 사용한 구문으로 해석하기 때문
//그러므로 중첩 if문을 쓸때 중괄호 생략을 안하는 것이 좋다.