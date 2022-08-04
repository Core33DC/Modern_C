#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main(void)
//{
//	int i, j;
//
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


//중첩 반복문 1. 별1개를 그린다. 2. 5번 반복한다. 3. 그걸 3번 반복한다.
//결괏값은 
//*****
//*****
//*****

//이렇게 나옴.

//바깥쪽 for문 먼저 실행 후 안쪽 for문 실행

//중첩반복문으로 구구단 구현


int main(void)
{
	int i, j;

	for (i = 2; i < 10; i++)
	{
		for (j = 1; j < 10; j++)
		{
			printf("%d * %d = %d\n", i, j, i * j);
		}
	}

	return 0;
}
