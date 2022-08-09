//배열명 역할을 하는 포인터

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int ary[3];
	int* pa = ary;
	int i;

	*pa = 10;
	*(pa + 1) = 20;
	pa[2] = pa[0] + pa[1];
	//*(pa + 2) = *(pa + 0) + *(pa + 1)  //포인터 연산식
	//*(ary + 2) = *(ary + 0) + *(ary + 1)  //pa에 저장된 값은 ary
	//ary[2] = ary[0] + ary[1]  //배열요소 표현식

	for (i = 0; i < 3; i++)
	{
		printf("%5d\n", pa[i]);	//포인터로 모든 배열 요소 출력
	}

	return 0;
}

//포인터에 대괄호를 사용하여 모든 배열 요소의 값을 출력한다.
//결국 포인터에 배열명을 저장하면 포인터 연산을 통해 모든 배열 요소를 사용할 수 있으므로
//포인터를 마치 배열명처럼 사용할 수 있음.